// Bai102.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int find_next_day(int day, int month, int year) {
	int nextday;
	if ((month % 2) && (month <= 7) || (!(month % 2) && (month > 7)))
		if (day < 31)
			nextday = day + 1;
		else
			nextday = 1;
	else if (month == 2)
		if (!(year % 400) || (!(year % 4) && (year % 100)))
			if (day < 29)
				nextday = day + 1;
			else
				nextday = 1;
		else
			if (day < 28)
				nextday = day + 1;
			else
				nextday = 1;

	else
		if (day < 30)
			nextday = day + 1;
		else
			nextday = 1;
	return nextday;
}

int main()
{
	int day, month, year;
	cin >> day >> month >> year;
	cout << find_next_day(day, month, year);
	return 0;
}

