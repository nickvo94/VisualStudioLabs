// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "String.h"
#include <iostream>
using namespace std;

void f(const String s) {
	cout << s.content;
}

int main()
{
	int i;
	String s("abcdefg\n");		
	s.list();
	f(s);	
	s.list();	
	cin >> i;
    return 0;
}

