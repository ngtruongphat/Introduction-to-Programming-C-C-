#include "stdafx.h"
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	float a, b, c;
	cin >> a >> b >> c;
	float lon = max(a, max(b,c));
	float be = min(a, min(b,c));
	cout << lon << " " << a + b + c - lon - be << " " << be;


    return 0;
}

