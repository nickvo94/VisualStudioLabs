#include <iostream>
#include "point.h"
using namespace std;

//Operation function implementations
Point::Point(float x0, float y0) {
	x = x0;
	y = y0;
}

void Point::read(const char *prompt) {
	cout << prompt;
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y : ";
	cin >> y;
}

void Point::print(const char *explanation) const {
	cout << explanation;
	cout << "(" << x << ", " << y << ")";
}


/*Option 1: Member function of the class
Point Point::operator+(const Point &displacement) const {
	Point destination;
	destination.x = x + displacement.x;
	destination.y = y + displacement.y;
	return destination;
}*/

//Option 2: Friend function of the class
Point operator+(const Point &p, const Point &displacement) {
	Point destination;
	destination.x = p.x + displacement.x;
	destination.y = p.y + displacement.y;
	return destination;
} 