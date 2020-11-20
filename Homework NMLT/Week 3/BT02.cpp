#include<stdio.h>;

void main()
{
	int gio, phut, giay;
	do{
		printf("Nhap gio: "); scanf("%d", &gio);
		if (gio<0 || gio>24) printf("Du lieu nhap vao khong hop le.\n");
	} while (gio<0 || gio>24);
	do{
		printf("Nhap phut: "); scanf("%d", &phut);
		if (phut<0 || phut>60) printf("Du lieu nhap vao khong hop le.\n");
	} while (phut<0 || phut>60);
	do{
		printf("Nhap giay: "); scanf("%d", &giay);
		if (giay<0 || giay>60) printf("Du lieu nhap vao khong hop le.\n");
	} while (giay<0 || giay>60);
	printf("Ban da nhap: %d gio, %d phut, %d giay.\n", gio, phut, giay);
}