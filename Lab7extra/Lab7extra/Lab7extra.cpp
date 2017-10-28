// Lab7extra.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "LimitedCounter.h"
#include "counter.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i;
	LimitedCounter lc(0, 5, "lc"); //initial value 0, upper limit 5
	
	/*
	int *test = new int;
	*test = 1234;
	cout << *test << endl;
	(*test)++;
	cout << *test << endl;
	*test++;
	cout << *test << endl;
	*/

	//cin >> i;	
	
	cout << lc++ << endl; //output should be 0
	
	//cin >> i;

	cout << ++lc << endl; //output should be 2
	
	
	//cout << endl << "Reset, expected output is 1 2 3 4 5 5 5 5 5" << endl;

	lc.reset();
	
	for (int i = 0; i < 9; i++) {
		lc++;
		cout << lc << " "; //output is 1 2 3 4 5 5 5 5 5		
	}
	cout << endl;
	cout << lc.getCount() << endl; //output is 5
	cout << (lc < 7) << endl;//Testing the comparison operator //output is 1
	cout << (lc < 1) << endl;//Testing the comparison operator //output is 0
	
	cin >> i;
	return 0;
}



