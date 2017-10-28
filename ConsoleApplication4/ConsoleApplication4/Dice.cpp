#include "stdafx.h"
#include "Dice.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <iostream>
using namespace std;


Dice::Dice()
{
}

void Dice::initialize() {
	srand(time(NULL));
}

float Dice::roll() {
	float x;
	x = ((float)(rand() % 10000)) / 10000;
	cout << x << endl ;
	return x;
}


Dice::~Dice()
{
}
