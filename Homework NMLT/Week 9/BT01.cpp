#include<stdio.h>
#include<conio.h>
using namespace std;
void nhapmang(int a[], int &n);
void xuatmang(int a[], int n);
void thongketansuat(int a[], int n);
int main()
{
	int a[100], n;
	nhapmang(a, n);
	xuatmang(a, n);
	thongketansuat(a, n);
	return 0;
}
void nhapmang(int a[], int &n)
{
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("phan tu a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}
void xuatmang(int a[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d \t", a[i]);
}
void thongketansuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int dem = 0;
		for (int j = 0; j < n; j++)
		{
			if (a[i] == a[j])
			{
				dem++;
			}
		}
		printf("\nPhan tu %d xuat hien %d lan\n ", a[i], dem);
	}
}
