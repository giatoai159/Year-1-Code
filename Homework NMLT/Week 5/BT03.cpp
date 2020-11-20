#include<stdio.h>;

void SoChan(int m, int n)
{
	int so = 0, t = 0, temp;
	temp = m;
	for (temp; temp <= n; temp++)
	{
		if (temp % 2 == 0)
		{
			so += 1;
			t += temp;
		}
	}
	printf("So cac so chan trong khoang %d .. %d la: %d\n", m, n, so);
	printf("Tong cac so chan trong khoang %d .. %d la: %d\n", m, n, t);
}

void main()
{
	int m, n;
	printf("Nhap m,n: "); scanf("%d%d", &m, &n);
	SoChan(m, n);
}