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
		printf("a[%d] = %d\n", i, a[i]);
	}
}
void XoaPhanTuTrongMang(int a[], int &n, int k)
{
	int i;
	k--;
	for (i = k; i < n; i++)
		a[i] = a[i + 1];
	n--;
}
void main()
{
	int a[1000], n, k;
	NhapMang(a, n);
	printf("Nhap vi tri phan tu muon xoa: "); scanf("%d", &k);
	XoaPhanTuTrongMang(a, n, k);
	XuatMang(a, n);
}