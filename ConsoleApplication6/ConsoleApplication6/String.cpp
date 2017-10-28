#include "stdafx.h"
#include "String.h"
#include <iostream>
using namespace std;


String::String(const char *content0)
{
	int len = strlen(content0) + 1;
	content = new char[len];
	cout << endl << "copy char of len: " << len;
	strcpy_s(content, len, content0);
	cout << "..ok " << content0;
	//strcpy_s(c_string, 10, content0);
}

String::String(const String &s)
{
	int len = strlen(s.content) + 1;
	content = new char[len];
	strcpy_s(content, len, s.content);
	//strcpy_s(c_string, 10, content0);
}

void String::list() {
	cout << content;
}


String::~String()
{
	cout << "String destructor " << content;
	//delete content;	
}

