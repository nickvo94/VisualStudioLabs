#include "stdafx.h"
#include "LimitedCounter.h"
#include "Counter.h"
#include <iostream>

using namespace std;

LimitedCounter::LimitedCounter(int min, int max) : Counter(min) {
	Setup(min, max);
}

LimitedCounter::LimitedCounter(const LimitedCounter &lc) : Counter(lc.minValue) {	
	minValue = lc.minValue;
	maxValue = lc.maxValue;
	Setup(minValue, maxValue);
}

ostream &operator<<(ostream &out, const LimitedCounter &c) {
	out << c.getCount();
	return out;
}

void LimitedCounter::Setup(int min, int max) {
	minValue = min;
	maxValue = max;
	if (minValue > maxValue) { minValue = maxValue; }	
	reset();
}

LimitedCounter &LimitedCounter::operator++() {
	cout << "Class LimitedCounter prefix ++" << endl;
	if (getCount() < maxValue) {
		Counter::operator++();		
	}
	return *this;
}

LimitedCounter LimitedCounter::operator++(int i) {
	LimitedCounter temp = *this;
	if (getCount() < maxValue) {		
		Counter::operator++(0);		
	}
	return temp;
}

bool LimitedCounter::operator<(const LimitedCounter &c) const {
	if (getCount() < c.getCount()) { return true;}
	return false;
}


bool LimitedCounter::operator<(const int v) const {
	if (getCount() < v) { return true; }
	return false;
}

LimitedCounter::~LimitedCounter() {
}