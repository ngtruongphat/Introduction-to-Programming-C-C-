#include "stdafx.h"
#include <iostream>
#define MAX 100
using namespace std;

void inputarray(float a[][MAX], int &dong, int &cot)
{
	do
	{
		cout << "Nhap so dong : ";
		cin >> dong;
		if (dong < 1 || dong > MAX)
			cout << "So dong khong hop le." << endl;
	} while (dong < 1 || dong > MAX);

	do
	{
		cout << "Nhap so cot : ";
		cin >> cot;
		if (cot < 1 || cot > MAX)
			cout << "So cot khong hop le." << endl;
	} while (cot < 1 || cot > MAX);

	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "] : ";
			cin >> a[i][j];
		}
	}
}

void xuatmang(float a[][MAX], int dong, int cot)
{
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
			cout << a[i][j] << " ";
	}
	cout << endl;
}

void TriTuyetDoi(float a[][MAX], int dong, int cot)
{
	int n = dong * cot;
	for (int i = 0; i < n; i++)
	{
		a[i / cot][i % cot] = (a[i / cot][i % cot] < 0 ? abs(a[i / cot][i % cot]) : a[i / cot][i % cot]);
	}
}

int main()
{
	float a[MAX][MAX];
	int dong, cot;
	inputarray(a, dong, cot);
	TriTuyetDoi(a, dong, cot);
	cout << "Ma tran tro thanh : " << endl;
	xuatmang(a, dong, cot);
	system("pause");
	return 0;
}