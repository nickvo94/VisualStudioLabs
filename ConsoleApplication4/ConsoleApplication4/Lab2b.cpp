// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Dice.h"
#include "Counter.h"
#include "Inspector.h"
#include <iostream>
using namespace std;


int main()
{
	int y;
	Dice dice;
	Counter counter1, counter2, i;
	Inspector inspector;
	dice.initialize();
	counter1.reset(); counter2.reset(), i.reset();
	inspector.setLimits(0.0, 0.5);
	while (i.getCount() < 100) {
		if (inspector.isInLimits(dice.roll()))
			counter1.increment();
		else
			counter2.increment();
		i.increment();
	}
	cout << counter1.getCount() << endl;
	cout << counter2.getCount() << endl;
	cin >> y;
	return 0;
}
