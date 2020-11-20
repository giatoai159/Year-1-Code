#include<stdio.h>;
#include<math.h>;

void main()
{
	float a, b, c, d;
	printf("Nhap chu vi hinh chu nhat: "); scanf("%f", &c);
	b = (c / 2) / 2.5;
	a = b*1.5;
	d = a*b;
	printf("Dien tich hinh chu nhat: %0.2f", d);
	printf("\n");
}