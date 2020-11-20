#include<stdio.h>;
#include<math.h>;

void main()
{
	const double pi = 3.1415;
	float a, b, c, d, e;
	printf("Nhap canh tam giac va ban kinh hinh tron: "); scanf("%f%f", &a, &b);
	c = pow(a, 2)*sqrt(3) / 4;
	d = pi*pow(b, 2);
	e = (c * 3) + (d / 2);
	printf("Dien tich cua hinh la = %0.2f", e);
	printf("\n");
}