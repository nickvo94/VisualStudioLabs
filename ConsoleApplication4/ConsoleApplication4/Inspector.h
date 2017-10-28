#pragma once
class Inspector
{
public:
	Inspector();
	~Inspector();
	void setLimits(float, float);
	bool isInLimits(float);
private:
	float limitMin;
	float limitMax;
};

