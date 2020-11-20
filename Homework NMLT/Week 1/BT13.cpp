#include<stdio.h>;
#include<math.h>;

void main()
{
	const double pi = 3.1415;
	float s;
	printf("Nhap dien tich hinh tron: "); scanf("%f", &s);
	printf("Ban kinh hinh tron = %0.2f", sqrt(s / pi));
	printf("\n");
}