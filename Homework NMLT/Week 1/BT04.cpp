#include<stdio.h>;
#include<math.h>;

void main()
{
	float x, a;
	printf("x = "); scanf("%f", &x);
	a = 3 * pow(x, 3) - 2 * pow(x, 2);
	printf("\nKQ = %0.2f", a);
	printf("\n");
}