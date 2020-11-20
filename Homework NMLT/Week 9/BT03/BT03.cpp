#include<stdio.h>;

void NhapMang(int a[], int &n)
{
	do
	{
		printf("Nhap so phan tu mang: "); scanf("%d", &n);
		if (n > 1000 || n <= 0) printf("Du lieu nhap vao khong hop le.\n");
	} while (n > 1000 || n <= 0);
	for (int i = 0; i < n; i++)
	{
		printf("Nhap phan tu a[%d]: ", i); scanf("%d", &a[i]);
	}
}
void XuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("c[%d] = %d\n", i, a[i]);
	}
}
void main()
{
	int a[1000], b[1000], c[1000], n;
	NhapMang(a, n);
	NhapMang(b, n);
	for (int i = 0; i < n; i++)
		c[i] = a[i] + b[i];
	XuatMang(c, n);
}