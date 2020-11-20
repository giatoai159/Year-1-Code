#include<stdio.h>;

void main()
{
	int a, b;
	printf("Nhap a va b : "); scanf("%d%d", &a, &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("So a = %d", a);
	printf("\nSo b = %d", b);
	printf("\n");
}