#pragma once
#include "LimitedCounter.h"

class CounterUser :public Observe_interf
{
public:
	CounterUser(int min = 0, int max = 5);
	void IncrementBy(int target);	
	void HandleLimitReached();
	~CounterUser();
private:
	LimitedCounter *lCounter;
};

