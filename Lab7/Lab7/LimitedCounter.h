#pragma once
#include "Counter.h"
#include <iostream>

using namespace std;

class LimitedCounter
{
	friend ostream &operator<<(ostream &out, const LimitedCounter &c);
public:
	LimitedCounter(int min, int max);
	~LimitedCounter();
	LimitedCounter &operator++();
	LimitedCounter operator++(int);
	bool operator<(LimitedCounter &c) const;
	bool operator<(int v) const;
	int getCount() const;
	void Setup(int, int);
	void reset();

private:
	Counter counter;
	int minValue;
	int maxValue;
};

