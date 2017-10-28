#pragma once
#include "counter.h"
#include <iostream>

using namespace std;

class LimitedCounter
{
	friend ostream &operator<<(ostream &out, const LimitedCounter &c);
public:
	LimitedCounter(int min = 0, int max = 1, string cname = "default");	
	LimitedCounter(const LimitedCounter&);
	
	LimitedCounter &operator=(const LimitedCounter &c);
	LimitedCounter &operator++();
	LimitedCounter operator++(int);	
	bool operator<(LimitedCounter &c) const;
	bool operator<(int v) const;
	int getCount() const;
	void Setup(int, int);
	void reset();
	~LimitedCounter();

private:
	Counter *counter;
	int minValue;
	int maxValue;
	string name;
};

