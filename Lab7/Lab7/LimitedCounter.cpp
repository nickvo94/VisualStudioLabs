#include "stdafx.h"
#include "LimitedCounter.h"
#include "Counter.h"
#include <iostream>

using namespace std;

ostream &operator<<(ostream &out, const LimitedCounter &c) {
	out << c.counter.getCount();
	return out;
}

LimitedCounter::LimitedCounter(int min, int max): counter() {
	Setup(min,max);
}

void LimitedCounter::Setup(int min, int max) {
	minValue = min;
	maxValue = max;
	if (minValue > maxValue) { minValue = maxValue; }	
	reset();
}

void LimitedCounter::reset() {
	counter.reset();
	//cout << " reset value :" << counter << endl;
	while (counter.getCount() < minValue) {
		counter++;
	}
}

LimitedCounter &LimitedCounter::operator++() {
	if (counter.getCount() < maxValue) {	
		++counter;				
		//cout << " ------- after ++operator value :" << counter << endl;
	}
	return *this;	
}

LimitedCounter LimitedCounter::operator++(int i) {
	LimitedCounter temp = *this;
	if (counter.getCount() < maxValue) {		
		this->counter++;		
		//cout << "-------- operator++ value :" << counter.operator++() << endl;
		//return *this;
		//cout << "-------- after operator++ value :" << counter << endl;
	}
	return temp;
}

bool LimitedCounter::operator<(LimitedCounter &c) const {
	if (counter.getCount() < c.counter.getCount()) { return true;}
	return false;
}

bool LimitedCounter::operator<(int v) const {
	if (counter.getCount() < v) { return true; }
	return false;
}

int LimitedCounter::getCount() const {
	return counter.getCount();
}

LimitedCounter::~LimitedCounter() {
}