#pragma once
#include <iostream>
using namespace std;

//class definitions
class Point {
	 friend Point operator+(const Point &p, const Point &displacement);
public:
	Point(float x0 = 0.0, float y0 = 0.0);
	void read(const char *prompt);
	void print(const char *explanation) const;
	//Point operator+(const Point &displacement) const;
private:
	float x;
	float y;
};

