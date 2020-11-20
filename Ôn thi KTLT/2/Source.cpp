#include<stdio.h>;
// Tim so nguyen to thu n
bool KiemTraSoNguyenTo(int n)
{
	int i;
	for (i = 2; i <= n / 2; i++)
	{
		if (n%i == 0) return 0;
	}
	return 1;
}

void main()
{
	int n, i = 2, dem = 0;
	do
	{
		printf("Nhap n = "); scanf("%d", &n);
		if (n <= 1 || n >= 600000) printf("Vui long nhap lai n.");
	} while (n <= 1 || n >= 600000);
	do
	{
		if (KiemTraSoNguyenTo(i) == true)
		{
			dem += 1;
		}
		if (dem == n) printf("%d", i);
		i++;
	} while (dem != n);
}