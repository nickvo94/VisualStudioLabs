#include "stdafx.h"
#include "LimitedCounter.h"
#include "counter.h"
#include <iostream>
#include <string>

using namespace std;

ostream &operator<<(ostream &out, const LimitedCounter &c) {	
	cout << *(c.counter);
	return out;
}

LimitedCounter::LimitedCounter(int min, int max, string cname){
	//cout << "!CON " << cname << " ";
	counter = new Counter(min);
	name = cname;
	Setup(min,max);
}

LimitedCounter::LimitedCounter(const LimitedCounter &lc) {
	//cout << "!COPY-CON " << lc.name << " ";
	counter = new Counter(lc.counter->getCount());
	//name = "Copy-of-"+lc.name;
	minValue = lc.minValue;
	maxValue = lc.maxValue;
}

void LimitedCounter::Setup(int min, int max) {
	minValue = min;
	maxValue = max;
	if (minValue > maxValue) { minValue = maxValue; }	
	reset();
}

void LimitedCounter::reset() {
	counter->reset();
	//cout << " reset value :" << counter->getCount() << endl;
}

LimitedCounter &LimitedCounter::operator=(const LimitedCounter &c) 
{
	//cout << "!EQU ";
	delete counter;

	counter  = new Counter(c.counter->getCount());
	minValue = c.minValue;
	maxValue = c.maxValue;

	return *this;
}

LimitedCounter &LimitedCounter::operator++() {
	//cout << "&operator++" << endl;
	if (counter->getCount() < maxValue) {	
		++(*counter);				
		//cout << " ------- after ++operator value :" << counter << endl;
	}
	return *this;
}

LimitedCounter LimitedCounter::operator++(int) {
	//cout << "!++i ";
	LimitedCounter temp = *this;
	if (counter->getCount() < maxValue) 
		(*counter)++;				
	return temp;		
}

bool LimitedCounter::operator<(LimitedCounter &c) const {
	if (counter->getCount() < c.counter->getCount()) { return true;}
	return false;
}

bool LimitedCounter::operator<(int v) const {
	if (counter->getCount() < v) { return true; }
	return false;
}

int LimitedCounter::getCount() const {
	return counter->getCount();
}

LimitedCounter::~LimitedCounter() {
	//cout << "!D " << name << " ";
	delete counter;
}