//#include "stdafx.h"
#include "String.h"
#include <iostream>
using namespace std;

String::String(const char *text)
{
	int len = strlen(text) + 1;
	content = new char[len];	
	strcpy_s(content, len, text);
	//S = new String(content);
	
}

String::String(const String &s)
{
	int len = strlen(s.content) + 1;
	content = new char[len];
	strcpy_s(content, len, s.content);	
}

void String::list() {
	cout << content;
}

String::operator char*() const {
	//char *c = new char[strlen(content)];
	//strcat_s(c, strlen(content), content);
	return content;
}

const String& String::operator++() {
	cout << "-- Operator++ is called\n";
	//std::string str;
	//str.append(content, "X");
	char *d = new char[strlen(content) + 2];
	strcpy_s(d, strlen(content) + 2, "X\n");
	strcat_s(d, strlen(content) + 2, content);	
	String *S = new String(d);
	delete d;	
	return *S;
}

String String::operator++(int i) {
	cout << "-- Operator++ post is called\n";
	//std::string str;
	//str.append(content, "X");
	char *d = new char[strlen(content) + 2];
	strcpy_s(d, strlen(content) + 2, "\n");
	strcpy_s(d, strlen(content) + 2, "X");
	strcat_s(d, strlen(content) + 2, content);
	String *S = new String(d);
	delete d;
	return *S;
}

char& String::operator[](unsigned int x) {
	cout << "-- Operator index is called\n";	
	return content[x];
}

String::~String()
{	
	delete content;	
}

ostream &operator<<(ostream &out, const String &s) {
	out << s.content;
	return out;
}

// Friend implementation:
String &operator+(const String &s1, const String &s2) {		
	int len;
	len = strlen(s1.content) + strlen(s2.content) + 2;
	char *c = new char[len];
	strcpy_s(c, len, "\n");	
	strcat_s(c, len, s1.content);
	strcat_s(c, len, s2.content);		
	cout << len << endl;
	cout << strlen(s1.content) << "," << strlen(s2.content) << endl;
	cout << strlen(c) << endl;
	cout << " --Created string:" << c << endl;
	String *S = new String(c);
	delete c;
	return *S;
}

const String &String::operator=(const String &s) {
	cout << "-- Operator = called\n";
	if (this != &s) {//avoid damages in self assignment
		int len = strlen(s.content) + 1;
		// if content exist in the current string, delete it
		if (content)
			delete[] content;
		content = new char[len];
		strcpy_s(content, len, s.content);
		cout << "----now content is:" << content << endl;
	}
	else
		cout << "self assigment\n";
	return *this;
}