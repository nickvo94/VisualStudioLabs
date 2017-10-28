// Lab5bonus.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "String.h"
#include "iostream"
using namespace std;

void display(const String &p) {
	cout << p;
}

int main(void) {
	String s("abcdefgsxxxxxxx"); // MAX_STRING_LENGTH is 10
	s[2] = 'Y';
	display(s); // outputs the string to the screen
	return 0;
}

