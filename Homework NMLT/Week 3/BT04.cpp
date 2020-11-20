#include<stdio.h>;

void main()
{
	int n;
	do
	{
		printf("Nhap so nguyen duong tu 1..12: "); scanf("%d", &n);
		if (n < 1 || n > 12) printf("Du lieu nhap vao khong hop le.\n");
	} while (n < 1 || n > 12);
	switch (n)
	{
	case 1:
		printf("Thang mot.");
		break;
	case 2:
		printf("Thang hai.");
		break;
	case 3:
		printf("Thang ba.");
		break;
	case 4:
		printf("Thang bon.");
		break;
	case 5:
		printf("Thang nam.");
		break;
	case 6:
		printf("Thang sau.");
		break;
	case 7:
		printf("Thang bay.");
		break;
	case 8:
		printf("Thang tam.");
		break;
	case 9:
		printf("Thang chin.");
		break;
	case 10:
		printf("Thang muoi.");
		break;
	case 11:
		printf("Thang muoi mot.");
		break;
	case 12:
		printf("Thang muoc hai.");
		break;
	}
	printf("\n");
}