#pragma once

class Timer
{
public:
	Timer();
	~Timer();
	bool read(char*);
	bool lessThan(Timer);
	Timer subtract(Timer);
	void display();
private:
	int hour;
	int min;
	int dmin;
};

