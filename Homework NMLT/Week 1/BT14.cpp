#include<stdio.h>;
#include<math.h>;

void main()
{
	int n;
	float x,s;
	printf("Nhap so nguyen duong n va so thuc x: "); scanf("%d%f", &n, &x);
	s = pow(pow(x, 2) + 1, n);
	printf("KQ = %0.2f", s);
	printf("\n");
}