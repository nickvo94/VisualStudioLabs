// Lab9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "LimitedCounter.h"
#include "RoundupCounter.h"

void UseCounter(Counter* c, int target)
{	
	int i;
	for (i = 0; i < target; i++) {
		++*c;
	}
}

int main()
{
	int i;
	LimitedCounter counterA(0, 5);	
	RoundupCounter counterB(0, 5);		
	UseCounter(&counterA, 8); UseCounter(&counterB, 8);

	cout << "Counter A: " << counterA << endl;
	cout << "Counter B: " << counterB << endl;

	cin >> i;

    return 0;
}

