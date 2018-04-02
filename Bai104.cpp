// Bai104.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int tim_thu_tu_ngay_trong_nam(int day, int month, int year) {
	/*day -= 1;*/
	switch (month) {
	case 12: day += 30;
	case 11: day += 31;
	case 10: day += 30;
	case 9: day += 31;
	case 8: day += 31;
	case 7: day += 30;
	case 6: day += 31;
	case 5: day += 30;
	case 4: day += 31;
	case 3:
		if (!(year % 400) || (!(year % 4) && (year % 100)))
			day += 29;
		else
			day += 28;
	case 2: day += 31;
	}	
	return day;
}

int main()
{
	int day, month, year;
	cin >> day >> month >> year;
	cout << tim_thu_tu_ngay_trong_nam(day, month, year);
    return 0;
}

