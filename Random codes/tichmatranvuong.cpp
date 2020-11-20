#include<iostream>

using namespace std;

int **tichMaTran(int **a, int **b, int n)
{
	int **f = new int*[n];
	for (int i = 0; i < n; i++)
	{
		f[i] = new int[n];
	}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			f[i][j] = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			for (int k = 0; k < n; k++)
				f[i][j] += a[i][k] * b[k][j];
	return f;
}

void HailStone(int n)
{
	cout << n << " ";
	if (n == 1) return;
	if (n % 2 == 0) HailStone(n / 2);
	else HailStone((n * 3) + 1);
}

int main()
{
	int **a = new int*[3];
	for (int i = 0; i < 3; i++)
	{
		a[i] = new int[3];
	}
	int k = 1;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
		{
			a[i][j] = k;
			k++;
		}
	int **b = new int*[3];
	for (int i = 0; i < 3; i++)
	{
		b[i] = new int[3];
	}
	k = 9;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
		{
			b[i][j] = k;
			k--;
		}
	int **f = tichMaTran(a, b, 3);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << f[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	HailStone(13);
	return 0;
}