// Bai105.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void doc_so_hai_chu_so(int num) {
	if (num < 20) {
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
		switch (num / 10) {
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
int main()
{
	int num;
	cin >> num;
	doc_so_hai_chu_so(num);
	cout << endl;
    return 0;
}

