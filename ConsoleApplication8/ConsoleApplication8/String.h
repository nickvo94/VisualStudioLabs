#pragma once
#include <iostream>
//#include <string>

using namespace std;

class String
{
	friend ostream &operator<<(ostream &out, const String &s);
	friend String &operator+(const String &s1, const String &s2);	
public:	
	String(const char * text = "");
	String(const String &s);
	void list();
	operator char*() const;
	const String& operator++();
	String operator++(int);
	char& operator[](unsigned int x);
	const String &operator=(const String &s);
	//String operator+(const String &s1) const;
	//const String &s);
	//char c_string[11];
	~String();	
private:	
	char *content;
};