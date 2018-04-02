#include <iostream>
#include<math.h>
#define MAX 100
using namespace std;
void NhapMang(float a[][MAX], int &dong, int &cot)
{
	do
	{
		cout << "\nNhap vao so dong: "

		if (dong < 1 || dong > MAX)
		{
			printf("\nSo dong khong hop le. Xin kiem tra lai!");
		}

	} while (dong < 1 || dong > MAX);

	do
	{
		cout << "\nNhap vao so cot: ");
		scanf("%d", &cot);

		if (cot < 1 || cot > MAX)
		{
			printf("\nSo cot khong hop le. Xin kiem tra lai!");

		}

	} while (cot < 1 || cot > MAX);
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			float temp;
			printf("\nNhap a[%d][%d] = ", i, j);
			scanf("%f", &temp);
			a[i][j] = temp;
		}
	}
}

void XuatMang(float a[][MAX], int dong, int cot)
{
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			cout <<a[i][j]
		}
		printf("\n\n");
	}
}

float TimMax(float a[][MAX], int dong, int cot)
{
	float Max = a[0][0];
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			if (a[i][j] > MAX);
			{
				Max = a[i][j];
			}
		}
	}
	return Max;
}
int main()
{
	float a[MAX][MAX];
	int dong, cot;
	NhapMang(a, dong, cot);
	XuatMang(a, dong, cot);

	float max = TimMax(a, dong, cot);
	printf("\nPhan tu lon nhat trong ma tran = %f", max);

	getch();
	return 0;
}