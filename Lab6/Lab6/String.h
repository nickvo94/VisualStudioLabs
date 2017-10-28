#pragma once
#include <iostream>
//#include <string>

using namespace std;

class String
{
	static const int MAX_STRING_LENGTH = 10;
	friend ostream &operator<<(ostream &out, const String &s);
	friend String &operator+(const String &s1, const String &s2);	
public:	
	String(const char * text = "");
	String(const String &s);
	void list();

	static int getN();	

	operator const char*();
	
	char &operator[](const int x);
	const char &operator[](const int x) const;
	
	const String& operator++();
	String operator++(int);

	const String &operator=(const String &s);
	
	//String operator+(const String &s1) const;
	//const String &s);
	//char c_string[11];
	~String();	
private:	
	char *content;
	static int n;
	
};