#pragma once
#include "counter.h"
#include <iostream>

class RoundupCounter : public Counter
{
public:
	friend ostream &operator<<(ostream &out, const RoundupCounter &c);
public:
	RoundupCounter(int min, int max);
	RoundupCounter(const RoundupCounter&);
	~RoundupCounter();
	RoundupCounter &operator++();
	RoundupCounter operator++(int);
	bool operator<(const RoundupCounter &c) const;
	bool operator<(const int v) const;
	void Setup(int, int);

private:
	//Counter counter;
	int minValue;
	int maxValue;
};

