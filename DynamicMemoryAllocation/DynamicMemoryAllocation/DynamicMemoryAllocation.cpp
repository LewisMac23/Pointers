// DynamicMemoryAllocation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Dynamic Memory Allocation
#include <iostream>
using namespace std;

/*
Dynamic memory allocation allows you to set array size dynamically during run time rather than at compile
time.This helps when the program dosen't know in advance about the number of items(variable values) to be stored.
*/
int main()
{
	int size;
	int* ptr;

	cout << "Enter the number of values you want to store (size of array):" << endl;
	cin >> size;

	ptr = new int[size];
	cout << "Enter values to be stored in the array"<<endl;
	for (int i = 0; i < size; i++)
	{
		cin >> ptr[i];
	}
	cout << "Values in the array are" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << ptr[i] << endl;
	}


	return 0;
}

