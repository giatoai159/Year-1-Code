#include<stdio.h>;
// Ve hinh kim cuong
void main()
{
	int i, j, n, temp;
	do 
	{
		printf("Nhap n = "); scanf("%d", &n);
		if (n % 2 == 0 || n < 3 || n>100) printf("Vui long nhap lai n.");
	} while (n % 2 == 0 || n < 3 || n>100);
	temp = n / 2 + 1;
	for (i = 1; i <= temp; i++)
	{
		for (j = 1; j <= temp-i; j++)
			printf("*");
		for (j = 1; j <= 2*i - 1; j++)
			printf("D");
		for (j = 1; j <= temp-i; j++)
			printf("*");
		printf("\n");
	}
	for (i = temp-1; i >= 1; i--)
	{
		for (j = 1; j <= temp - i; j++)
			printf("*");
		for (j = 1; j <= 2 * i - 1; j++)
			printf("D");
		for (j = 1; j <= temp - i; j++)
			printf("*");
		printf("\n");
	}
}