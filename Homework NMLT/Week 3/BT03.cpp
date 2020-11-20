#include<stdio.h>;

void main()
{
	int a, b, c, n1, n2, n3;
	printf("Nhap vao 3 so a, b, c: "); scanf("%d%d%d", &a, &b, &c);
	if (a > b && a > c)
	{
		n1 = a;
		if (b > c)
		{
			n2 = b;
			n3 = c;
		}
		else
		{
			n2= c;
			n3 = b;
		}
	}
	if (b > a && b > c)
	{
		n1 = b;
		if (a > c)
		{
			n2 = a;
			n3 = c;
		}
		else
		{
			n2 = c;
			n3 = a;
		}
	}
	if (c > b && c > a)
	{
		n1 = c;
		if (a > b)
		{
			n2 = a;
			n3 = b;
		}
		else
		{
			n2 = b;
			n3 = a;
		}
	}
	printf("Thu tu tang dan cac so la: %d, %d, %d\n", n3, n2, n1);
}