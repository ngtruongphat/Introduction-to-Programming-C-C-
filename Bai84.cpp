#include "stdafx.h"
#include <iostream>
using namespace std;
// bien luan phuong trinh bac 1 ax+b=0
int main()
{
	int a, b;
	cin >> a >> b;
	if (a == 0 && b == 0) cout << "Phuong trinh vo so nghiem";
	if (a == 0 && b != 0) cout << "Phuong trinh vo so nghiem" ;
		if (!(a == 0 && b == 0)) cout << (float)-b / a;
    return 0;
}

