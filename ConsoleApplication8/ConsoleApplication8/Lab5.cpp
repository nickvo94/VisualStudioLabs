// ConsoleApplication8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "String.h"
using namespace std;


int main()
{
	int i;
	String s;
	char name[30];
	s = "Matti"; //Conversion c-string -> String
	cout << s << endl;
	strcpy_s(name, 30, s); //Conversion String -> c-string	
	cout << name << endl;
	cin >> i;
    return 0;
}

