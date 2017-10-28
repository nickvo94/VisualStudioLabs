#include "stdafx.h"
#include "Counter.h"
#include <iostream>
using namespace std;


Counter::Counter()
{
}

void Counter::reset() {
	count = 0;
}

int Counter::getCount() {
	return count;
}

void Counter::increment() {
	if (count < 100)
		count++;
	else {
		reset();
		cout << "Counter roundup happened" << endl;
	}
}

Counter::~Counter()
{
}
