#include <iostream>
#include <time.h>

using namespace std;
int number;
int *numArray;
int n;


int mean(int *numArray , int i) {
	int average = 0;
	for (int y = 0; y < i; y++) {
		average = average + numArray[y];
	}
	average = average / i;
	return average;
}

int main() {
	int i;
	
	while (1) {	
		srand(time(NULL));
		cout << "Please enter the number of values to generate: ";
		cin >> i;				
		numArray = new int[i];
		cout << "The numbers are : \n" ;
		for (int x = 0; x < i; x++) {
			number = rand() % 100;
			numArray[x] = number;
			cout << number << ".\n";
		}
		int averg = mean(numArray, i);
		cout << "The average value is :" << averg << ".\n";
		delete numArray;
	}	
	cin.get();	
	return 0;	
}