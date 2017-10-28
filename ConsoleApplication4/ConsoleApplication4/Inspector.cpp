#include "stdafx.h"
#include "Inspector.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "Dice.h"


Inspector::Inspector()
{
}

void Inspector::setLimits(float a, float b) {
	limitMin = a;
	limitMax = b;
}

bool Inspector::isInLimits(float d) {
	if ((d > limitMin) && (d <= limitMax)) { return true; }
	return false;
}


Inspector::~Inspector()
{
}
