#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int a, b, c;
	float x1, x2;
	float dt;
	cin >> a >> b >> c;
	if (a != 0)
	{
		dt = b*b - 4 * a*c;
		if (dt > 0) cout << "2 Nghiem phan biet " << (-b - sqrt(dt)) / (2*a) << ";" << (-b + sqrt(dt)) / (2*a);
		else
		{
			if (dt == 0) cout << "Nghiem kep" << -b / (2 * a);
			else
			{
				if (dt < 0) cout << "Vo nghiem";
			}
		}
	}
	else cout << "Khong phai phuong trinh bac 2";

    return 0;
}

