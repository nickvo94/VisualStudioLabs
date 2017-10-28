#pragma once
#include "counter.h"
#include <iostream>

using namespace std;

class LimitedCounter: public Counter
{
	friend ostream &operator<<(ostream &out, const LimitedCounter &c);
public:
	LimitedCounter(int min, int max);
	LimitedCounter(const LimitedCounter&);
	~LimitedCounter();
	LimitedCounter &operator++();
	LimitedCounter operator++(int);
	bool operator<(const LimitedCounter &c) const;
	bool operator<(const int v) const;	
	void Setup(int, int);

private:
	//Counter counter;
	int minValue;
	int maxValue;
};

