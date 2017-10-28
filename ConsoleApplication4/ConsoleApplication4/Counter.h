#pragma once
class Counter
{
public:
	Counter();
	~Counter();
	void reset();
	int getCount();
	void increment();
private:
	int count;
};

