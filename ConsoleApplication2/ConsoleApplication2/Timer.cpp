#include "stdafx.h"
#include "Timer.h"
#include <iostream>
#include <iomanip> 

using namespace std;

Timer::Timer()
{
}

bool Timer::read(char* text) {	
	char ch;
	bool valid = false;
	cout << text;
	cin >> hour >> ch >> min ;
	valid = (-1 < hour && hour < 24) && (-1 < min && min < 60);
	return valid;
}

bool Timer::lessThan(Timer t2) {
	int dmin, t1min, t2min;
	t1min = hour * 60 + min; // target object
	t2min = t2.hour * 60 + t2.min;// parameter object
	if (t1min < t2min) {
		return true;
	}
	else { return false; }
	
}

Timer Timer::subtract(Timer t2){ 
	Timer aux;
	int t1min, t2min;
	t1min = hour * 60 + min; // target object
	t2min = t2.hour * 60 + t2.min;// parameter object
	dmin = t1min - t2min;
	aux.hour = dmin / 60; // local object
	aux.min = dmin % 60; // local object
	return aux;
}

void Timer::display() {
	cout << setfill('0') << setw(2) << hour << ":" << setfill('0') << setw(2) << min << endl;
	}

Timer::~Timer()
{
}
