#include<stdio.h>;
#include<math.h>;

void main()
{
	float a, b;
	printf("Nhap chieu dai 2 canh hinh chu nhat: "); scanf("%f %f", &a, &b);
	printf("Chu vi: %0.2f", (a + b) * 2);
	printf("\nDien tich: %0.2f", a*b);
	printf("\n");
}