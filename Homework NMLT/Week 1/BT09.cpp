#include<stdio.h>;
#include<math.h>;

void main()
{
	const double pi = 3.14159;
	float a;
	printf("Nhap ban kinh hinh tron: "); scanf("%f", &a);
	printf("Chu vi hinh tron = %0.2f", 2 * a*pi);
	printf("\nDien tich hinh tron = %0.2f", pi*pow(a, 2));
	printf("\n");
}