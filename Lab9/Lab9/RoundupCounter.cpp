#include "stdafx.h"
#include "RoundupCounter.h"
#include "Counter.h"
#include <iostream>

using namespace std;

RoundupCounter::RoundupCounter(int min, int max) : Counter(min) {
	Setup(min, max);
}

RoundupCounter::RoundupCounter(const RoundupCounter &lc) : Counter(lc.minValue) {
	minValue = lc.minValue;
	maxValue = lc.maxValue;
	Setup(minValue, maxValue);
}

ostream &operator<<(ostream &out, const RoundupCounter &c) {
	out << c.getCount();
	return out;
}

void RoundupCounter::Setup(int min, int max) {
	minValue = min;
	maxValue = max;
	if (minValue > maxValue) { minValue = maxValue; }
	reset();
}

RoundupCounter &RoundupCounter::operator++() {
	cout << "Class RoundupCounter prefix ++" << endl;
	if (getCount() < maxValue) {
		Counter::operator++();
	} else {
		reset();
	}
	return *this;
}

RoundupCounter RoundupCounter::operator++(int i) {
	RoundupCounter temp = *this;
	if (getCount() < maxValue) {
		Counter::operator++(0);
	}
	else {
		reset();
	}
	return temp;
}

bool RoundupCounter::operator<(const RoundupCounter &c) const {
	if (getCount() < c.getCount()) { return true; }
	return false;
}


bool RoundupCounter::operator<(const int v) const {
	if (getCount() < v) { return true; }
	return false;
}

RoundupCounter::~RoundupCounter() {
}