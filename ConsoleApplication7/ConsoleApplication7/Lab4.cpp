// ConsoleApplication7.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>
#include "String.h"
#include "point.h"
using namespace std;



int main()
{

	String s1("abcedf");
	String s2("ghijklmn");
	String sum;

	cout << "String 1 is:" << s1 << endl;
	cout << "String 2 is:" << s2 << endl;
	
	sum = s1 + s2;
	cout << "Sum is :" << sum << endl; // output should be
							   // abcdefghijklmn
							   // This should also work
	sum = sum;		
	cout << "Sum is still :" << sum << endl; // output should
									 // still be abcdefghijklmn
	cout << "----------------------------------------------" << endl;
	String s("abcdefg");
	cout << s++ << endl;
	cout << ++s << endl;

	cout << "----------------------------------------------" << endl;
	String str("abcdefg");
	for (int i = 0; i < 7; i++)
		cout << str[i] << " ";
	str[4] = 'X';
	for (int i = 0; i < 7; i++)
		cout << str[i] << " ";

	while (!_fgetchar());
	
	return 0;
}

