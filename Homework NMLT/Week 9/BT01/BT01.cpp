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
void TanSuat(int a[], int n)
{
	printf("Phan tu\tTan suat\n");
	int i, j, tansuat, b[1000];
	for (i = 0; i < n; i++)
	{
		tansuat = 1;
		if (b[i])
		{
			b[i] = 0;
			for (j = i + 1; j < n; j++)
			{
				if (a[j] == a[i])
				{
					tansuat++;
					b[j] = 0;
				}
			}
			printf("%4d\t%4d\n", a[i], tansuat);
		}

	}
}
void main()
{
	int a[1000], n;
	NhapMang(a, n);
	TanSuat(a, n);
}