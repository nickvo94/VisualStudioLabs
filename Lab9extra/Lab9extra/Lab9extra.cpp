// Lab9extra.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "LimitedCounter.h"
#include "CounterUser.h"
#include "Counter.h"


int main()
{	
	int i;
	CounterUser *c = new CounterUser();
	c->IncrementBy(12);
	delete c;
	cin >> i;
}

