#pragma once
#include "LimitedCounter.h"

class Observe_interf
{
public:
	virtual void HandleLimitReached() = 0;	
private:
};
