// Lab10extra.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
	int row, col;
	cout << "Enter row: ";
	cin >> row;
	cout << "Enter col: ";
	cin >> col;

	std::vector<vector<int>> v2d ;    //declare array

	int i, j;
	int input;

	//Enter array
	cout << "Enter Data in array" << endl;
	
	for (i = 0; i < row; i++)
	{
		v2d.push_back(vector<int>());
		for (j = 0; j < col; j++)
		{
			cout << "Enter element [" << i << "][" << j << "]: ";
			cin >> input;
			v2d.back().push_back(input);
		}
	}
	
	//Show array
	cout << "Table of contents" << endl;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			cout << setw(3) << v2d[i][j];     //show row in one line
		}
		cout << endl;
	}

	cin >> input;
	
	return 0;
}
