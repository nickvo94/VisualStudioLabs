// Lab11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <time.h>
#include <fstream>
#include <iterator>
#include <algorithm>

using namespace std;

//Ordinary function
int randGen_1() {
	return rand() % 37 + 1;
}
//Function object
class RandGen_2 {
public:
	RandGen_2() : numbers() { srand(time(NULL)); }
	int operator()();
private:
	vector<int> numbers;
};

int RandGen_2::operator()() {
	int number;
	do {
		number = rand() % 37 + 1;
	} while (find(numbers.begin(), numbers.end(), number) != numbers.end());
	numbers.push_back(number);
	return number;
}

struct myclass {
	void operator() (int i) { j++;  std::cout << "#" << j << ":" << i << endl; }
private:
	int j = 0;
} myobject;

/*void generate(vector<int>::iterator begin, vector<int>::iterator end, RandGen_2 r) {
	

}*/

void main(void) {
	int i;
	vector<int> numbers(10);
	//this is how to use "ordinary"function
	/* srand(time(NULL)); // it is necessary to remember to call this
	generate(numbers.begin(), numbers.end(), randGen_1); */
	//this is how to use function object
	RandGen_2 randGen_2;


	std::vector<int> myvector1(7);
	std::vector<int> myvector2(7);
	std::vector<int>::iterator it;

	generate(myvector1.begin(), myvector1.end(), randGen_2);
	cout << "First lotto row: ";
	
	std::ostream_iterator<int> out_it(std::cout, " ");
	std::copy(myvector1.begin(), myvector1.end(), out_it);
	cout << endl;



	generate(myvector2.begin(), myvector2.end(), randGen_2);
	cout << "Second lotto row: ";

	std::ostream_iterator<int> out_it2(std::cout, " ");
	std::copy(myvector2.begin(), myvector2.end(), out_it2);
	cout << endl;

	std::sort(myvector1.begin(), myvector1.end());
	std::sort(myvector2.begin(), myvector2.end());
	std::vector<int> v3;
	std::set_intersection(myvector1.begin(), myvector1.end(), myvector2.begin(), myvector2.end(), std::back_inserter(v3));


	std::cout << "The same numbers : " << endl;
	for_each(v3.begin(), v3.end(), myobject); {
		cout << '\n';
	}
	
	//for (unsigned int i = 0; i < numbers.size(); i++)
		//cout << numbers[i] << endl;
	cin >> i;
}



