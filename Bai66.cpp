#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;
void giaitrungphuong(int a, int b, int c)
{
	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)
				cout << "vo so nghiem" << endl;
			else
				cout << "Vo nghiem" << endl;
		}
		else
		{
			float t = -c / b;
			if (t < 0)
				cout << "vo nghiem" << endl;
			else
				cout << "Nghiem : +-" << sqrt(t);
		}
	}
	else //a!=0
	{
		int delta = (b*b) - 4 * a*c;
		if (delta < 0) cout << "vo nghiem" << endl;
		else if (delta == 0)
		{
			float t = -b / 2 / a;
			if (t < 0) cout << " vo nghiem" << endl;
			else
				cout << "Nghiem: +-" << sqrt(t);
		}
		else
		{
			float t1 = (-b - sqrt(delta)) / 2 / a;
			float t2 = (-b + sqrt(delta)) / 2 / a;
			if (t1 < 0 && t2 < 0) cout << "vo nghiem" << endl;
			else if (t1 >= 0 && t2 < 0) cout << "nghiem la +-" << sqrt(t1) << endl;
			else if (t1 < 0 && t2 >= 0) cout << "nghiem la +-" << sqrt(t2) << endl;
			else cout << "Nghiem la -+" << sqrt(t1) << " va " << "-+" << sqrt(t2) << endl;

		}
	}
}
void main()
{
	double a, b, c, delta, t, t1, t2;
	cout << "Nhap he so: ";
	cin >> a >> b >> c;
	giaitrungphuong(a, b, c);

}