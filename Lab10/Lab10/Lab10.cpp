// Lab10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <string>

#define MAX_STRING_SIZE 1024

using namespace std;

template <class T1, class T2> struct pair;
template <class T1> struct vector;


int main()
{
	int i;
	int num;
	
	// Osa A -----------------------------------------------------------------------------------------
	std::pair< int, std::pair<std::string, std::string>> num_name;

	num_name = std::make_pair(123, std::make_pair("aaaaa", "xxxxxx"));

	cout << num_name.first << " " << num_name.second.first << " " <<num_name.second.second << endl;

	// Osa B ------------------------------------------------------------------------------------------

	std::vector< string > string_list;
	string input;

	while (input != "stop") {
		cin >> input;
		string_list.push_back(input);
	}
	string_list.pop_back();

	//the containers
	string longest;

	//checks for the longest string
	for (int i = 0; i != string_list.size(); i++) {
		if (string_list[i].length() > longest.length()) {
			longest = string_list[i];
		}
	}

	//the output longest
	cout << "--Longest: " << longest << endl;
	
	int count = 0;
	std::cout << "---All string from vector: ";
	for (unsigned i = 0; i < string_list.size(); ++i) {
		std::cout << ' ' << string_list[i];
		count++;
	}

	cout << '\n';
	cout << "----The number of string: " << string_list.size() << endl;

	//------------------------------------------------------------------------------------------
	// "***Returns the number of elements in the vector."
	cout << "***Size: " << string_list.size() << endl;
	//"***Returns the size of the storage space currently allocated for the vector, expressed in terms of elements."
	cout << "***Capacity: " << string_list.capacity() << endl;
	//"*** Size of is implemented and evaluated by the compiler"
	cout << "***Size of: " << sizeof(string_list) << endl;

	//---------------------------------------------------------------------------------------------

	cin >> i; 
    return 0;
}

