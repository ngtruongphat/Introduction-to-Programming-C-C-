// Bai103.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int find_previous_day(int day, int month, int year) {
	int previousday;
	if ((month % 2) && (month <= 7) || (!(month % 2) && (month > 7))) {
		if (day > 1)
			previousday = day - 1;
		else {
			if (month == 1)
				previousday = 31;
			else
				previousday = 30;
			if (month == 3)
				if (!(year % 400) || (!(year % 4) && (year % 100)))
					previousday = 29;
				else
					previousday = 28;
		}
	}
	else
		if (day > 1)
			previousday = day - 1;
		else
			previousday = 31;
	return previousday;
}

int main()
{
	int day, month, year;
	cin >> day >> month >> year;
	cout << find_previous_day(day, month, year);
	return 0;
}
