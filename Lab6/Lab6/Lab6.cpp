// Lab6.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include "String.h"
#include "iostream"
using namespace std;

void display(const String &p) {	
	for (int i = 0; p[i] != 0; i++)
		cout << p[i] << endl;
}

int main(void) {
	int i;
	String s("abcdefgsxxxxxxx"); // MAX_STRING_LENGTH is 10	
	s[2] = 'Y';
	display(s); // outputs the string to the screen

	cout << String::getN() << endl;
	// display the number of String objects	
	{
		String array[4];
		cout << String::getN() << endl;
	}
	cout << String::getN()<< endl;
	

	cin >> i;
	return 0;
}

