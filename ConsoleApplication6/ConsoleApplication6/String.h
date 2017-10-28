#pragma once
class String
{
public:
	String(const char * content0 = "");
	String(const String &s);
	//char c_string[11];
	~String();
	void list();
	char *content;
private:	
};

