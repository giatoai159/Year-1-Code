#include<stdio.h>;

int SoHoanThien(int n)
{
	int i, t = 0;
	if (n == 0) return 0;
	for (i = 1; i <= n/2 ; i++)
	{
		if (n%i == 0) t += i;
		if (i == n/2 && t == n) return 1;
	}
	return 0;
}

void main()
{
	int n, i;
	printf("Nhap N:"); scanf("%d", &n);
	for (i = 1; i < n; i++)
	{
		if (SoHoanThien(i) == 1) printf("%d\n", i);
	}
}