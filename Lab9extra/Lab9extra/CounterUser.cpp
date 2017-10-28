#include "stdafx.h"
#include "CounterUser.h"

CounterUser::CounterUser(int min, int max) : lCounter(new LimitedCounter(min, max))
{
	lCounter->SetObserve(this);	
}

void CounterUser::IncrementBy(int target) {
	for (int i = 0; i < target; i++) {
		lCounter->operator++();
	}
}

void CounterUser::HandleLimitReached() {
	cout << "----Limit has been reached----" << endl;
}

CounterUser::~CounterUser()
{
	delete lCounter;
}
