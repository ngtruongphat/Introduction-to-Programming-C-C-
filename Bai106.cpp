// Bai106.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void doc_so_ba_chu_so(int num) {
	if (num == 100)
		cout << "mot tram";
	else {
		switch (num / 100) {
		case 1: cout << "mot tram "; break;
		case 2: cout << "hai tram "; break;
		case 3: cout << "ba tram "; break;
		case 4: cout << "bon tram "; break;
		case 5: cout << "nam tram "; break;
		case 6: cout << "sau tram "; break;
		case 7: cout << "bay tram "; break;
		case 8: cout << "tam tram "; break;
		case 9: cout << "chin tram "; break;
		}
		if (num > 100 && num < 110) {
			cout << "le ";
			switch (num % 100) {
			case 1: cout << "mot "; break;
			case 2: cout << "hai "; break;
			case 3: cout << "ba "; break;
			case 4: cout << "bon "; break;
			case 5: cout << "nam "; break;
			case 6: cout << "sau "; break;
			case 7: cout << "bay "; break;
			case 8: cout << "tam "; break;
			case 9: cout << "chin "; break;
			}
		}
		else if (num >= 110 && num < 120) {
			cout << "muoi ";
			switch (num % 10) {
			case 1: cout << "mot "; break;
			case 2: cout << "hai "; break;
			case 3: cout << "ba "; break;
			case 4: cout << "bon "; break;
			case 5: cout << "lam "; break;
			case 6: cout << "sau "; break;
			case 7: cout << "bay "; break;
			case 8: cout << "tam "; break;
			case 9: cout << "chin "; break;
			}
		}
		else {
			switch ((num / 10) % 10) {
			case 2: cout << "hai "; break;
			case 3: cout << "ba "; break;
			case 4: cout << "bon "; break;
			case 5: cout << "nam "; break;
			case 6: cout << "sau "; break;
			case 7: cout << "bay "; break;
			case 8: cout << "tam "; break;
			case 9: cout << "chin "; break;
			}
			cout << "muoi ";
			switch (num % 10) {
			case 1: cout << "mot "; break;
			case 2: cout << "hai "; break;
			case 3: cout << "ba "; break;
			case 4: cout << "bon "; break;
			case 5: cout << "lam "; break;
			case 6: cout << "sau "; break;
			case 7: cout << "bay "; break;
			case 8: cout << "tam "; break;
			case 9: cout << "chin "; break;
			}
		}
	}
}

int main()
{
	int num;
	cin >> num;
	doc_so_ba_chu_so(num);
	cout << endl;
	return 0;
}

