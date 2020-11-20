#include<stdio.h>;

int KiemtraSoChinhPhuong(int n)
{
	int i;
	if (n == 1) return 1;
	for (i = 2 ; i <= (n/2) ; i++)
	{
		if (i*i == n) return 1;
	}
	return 0;
}

void main()
{
	int a, b;
	printf("Nhap A, B:"); scanf("%d%d", &a, &b);
	printf("\nSo chinh phuong trong khoang %d .. %d la: ",a,b);
	for (a ; a <= b ; a++)
	{
		if (KiemtraSoChinhPhuong(a) == 1) printf("%d ", a);
	}
}