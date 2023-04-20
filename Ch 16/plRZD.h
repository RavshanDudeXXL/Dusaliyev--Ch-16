#pragma once
#include <iostream>
#include <cmath>
#include <iomanip> //formatting output
#include <string> //so we can get string info
#include <cstdlib> //strange randomness
#include <fstream>
#include <vector>
#include <cctype>
#include <random>
#include <algorithm>
#include <typeinfo>

using namespace std;

int endProgram() {
	cout << "\n\nPress enter to exit" << endl;
	cin.ignore(100, '\n');
	cin.get();
	return 0;
}

int validateInteger(string prompt) {
	int userNumber = 0;
	cout << prompt;
	while (!(cin >> userNumber) || cin.fail()) {
		cout << "ERROR:  Invalid entry.  " << prompt << endl;
		cin.clear();
		cin.sync();
		cin.ignore(100, '\n');

	}
	return userNumber;
}

int validateIntegerR(string prompt, int min, int max)
{
	int userNumber = 0;
	cout << prompt;
	while (!(cin >> userNumber) || cin.fail() || userNumber < min || userNumber>max) {
		cout << "ERROR:  Invalid entry.  \n" << prompt << endl;
		cin.clear();
		cin.sync();
		cin.ignore(100, '\n');

	}
	return userNumber;
}

double validateDouble(string prompt) {

	double userNumber = 0.0;
	cout << prompt;
	while (!(cin >> userNumber) || cin.fail()) {
		cout << "ERROR:  Invalid entry.  \n" << prompt << endl;
		cin.clear();
		cin.sync();
		cin.ignore(100, '\n');

	}
	return userNumber;
}

float validateFloat(string prompt) {

	float userNumber = 0.0;
	cout << prompt;
	while (!(cin >> userNumber) || cin.fail()) {
		cout << "ERROR:  Invalid entry.  \n" << prompt << endl;
		cin.clear();
		cin.sync();
		cin.ignore(100, '\n');

	}
	return userNumber;
}

char validateCharR(string prompt, char min, char max)
{
	char userChar = 'b';
	cout << prompt;
	while (!(cin >> userChar) || cin.fail() || userChar < min || userChar>max) {
		cout << "ERROR:  Invalid entry.  \n" << prompt << endl;
		cin.clear();
		cin.sync();
		cin.ignore(100, '\n');

	}
	return userChar;
}

int random(int min, int max)
{
	std::random_device rand_dev;
	std::mt19937 generator(rand_dev());
	std::uniform_int_distribution<int> distr(min, max);
	return distr(generator);
}

string validateString(string prompt) {
	string userString = "a";
	cout << prompt;
	while (!(cin >> userString) || cin.fail()) {
		cout << "ERROR:  Invalid entry.  " << prompt << endl;
		cin.clear();
		cin.sync();
		cin.ignore(100, '\n');

	}
	return userString;
}

int validateIntegerM(string prompt, int min)
{
	int userNumber = 0;
	cout << prompt;
	while (!(cin >> userNumber) || cin.fail() || userNumber < min) {
		cout << "ERROR:  Invalid entry.  \n" << prompt << endl;
		cin.clear();
		cin.sync();
		cin.ignore(100, '\n');

	}
	return userNumber;
}

float validateFloatR(string prompt, float min, float max)
{
	float userNumber = 0;
	cout << prompt;
	while (!(cin >> userNumber) || cin.fail() || userNumber < min || userNumber>max) {
		cout << "ERROR:  Invalid entry.  \n" << prompt << endl;
		cin.clear();
		cin.sync();
		cin.ignore(100, '\n');

	}
	return userNumber;
}

float validateFloatM(string prompt, float min)
{
	float userNumber = 0;
	cout << prompt;
	while (!(cin >> userNumber) || cin.fail() || userNumber < min) {
		cout << "ERROR:  Invalid entry.  \n" << prompt << endl;
		cin.clear();
		cin.sync();
		cin.ignore(100, '\n');

	}
	return userNumber;
}

void selectionSortF(float arr[], int size)
{
	int minIndex, minValue;

	for (int start = 0; start < (size - 1); start++)
	{
		minIndex = start;
		minValue = arr[start];
		for (int index = start + 1; index < size; index++)
		{
			if (arr[index] < minValue)
			{
				minValue = arr[index];
				minIndex = index;
			}
		}
		swap(arr[minIndex], arr[start]);
	}
}

int binarySearch(const int arr[], int numElems, int value)
{
	int first = 0, last = numElems - 1, middle, position = -1;
	bool found = false;

	while (!found && first <= last)
	{
		middle = (first + last) / 2;
		if (arr[middle] == value)
		{
			found = true;
			position = middle;
		}
		else if (arr[middle] > value)
			last = middle - 1;
		else
			first = middle + 1;
	}
	return position;
}

int linearSearchStr(string arr[], int size, string value)
{
	int index = 0, position = -1;
	bool found = false;

	while (index < size && !found)
	{
		if (arr[index] == value)
		{
			found = true;
			position = index;
		}
		index++;
	}
	return position;
}

int linearSearch(int arr[], int size, int value)
{
	int index = 0, position = -1;
	bool found = false;

	while (index < size && !found)
	{
		if (arr[index] == value)
		{
			found = true;
			position = index;
		}
		index++;
	}
	return position;
}

char validateChar(string prompt)
{
	char userChar = 'b';
	cout << prompt;
	while (!(cin >> userChar) || cin.fail()) {
		cout << "ERROR:  Invalid entry.  \n" << prompt << endl;
		cin.clear();
		cin.sync();
		cin.ignore(100, '\n');

	}
	return userChar;
}