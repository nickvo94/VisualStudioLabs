#pragma once
#include "counter.h"
#include <iostream>
#include "Observe_interf.h"

using namespace std;
class Observe_interf;

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
	
	void SetObserve(Observe_interf *o);
	void Notify();
private:
	//Counter counter;
	Observe_interf *observe;
	int minValue;
	int maxValue;
};

