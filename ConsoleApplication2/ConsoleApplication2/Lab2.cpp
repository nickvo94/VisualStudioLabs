#include "stdafx.h"
#include "Timer.h"
#include <iostream>
using namespace std;

int main() {
	Timer time1, time2, duration;
	bool check1, check2;
	while (1) {
		check1 = time1.read("Enter time 1 : ");
		check2 = time2.read("Enter time 2 : ");
		if (check1 && check2) {
			if (time1.lessThan(time2)) {
				duration = time2.subtract(time1);
				cout << "Starting time was ";
				time1.display();
			}
			else {
				duration = time1.subtract(time2);
				cout << "Starting time was ";
				time2.display();
			}
			cout << "Duration was: ";
			duration.display();
		}
		
	}
	
	return 0;
}