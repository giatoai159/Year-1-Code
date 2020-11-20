#include<stdio.h>;

void main()
{
	int a, b, c, d, e;
	float f;
	printf("Nhap a va b:\n"); scanf("%d%d", &a, &b);
	// Tinh tong hieu tich thuong
	c = a + b;
	d = a - b;
	e = a*b;
	f = a*1.0 / b;
	// In ra cac ket qua
	printf("\nTong la %d", c);
	printf("\nHieu la %d", d);
	printf("\nTich la %d", e);
	printf("\nThuong la %f", f);
	printf("\n");
}