// Lab7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "LimitedCounter.h"
#include <iostream>

using namespace std;

int main()
{
	int i;
	LimitedCounter lc(0, 5); //initial value 0, upper limit 5
	cout << lc++ << endl; //output should be 0
	cout << ++lc << endl; //output should be 2
	lc.reset();
	for (int i = 0; i < 9; i++) {
		lc++;
		cout << lc << endl; //output is 1 2 3 4 5 5 5 5 5
	}
	cout << lc.getCount() << endl; //output is 5
	cout << (lc < 7);//Testing the comparison operator //output is 1
	cout << (lc < 1);//Testing the comparison operator //output is 0
	cin >> i;
	return 0;
}

