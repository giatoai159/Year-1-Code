#include<stdio.h>;

void main()
{
	// a->b,b->c,c->a
	int a, b, c;
	printf("Nhap a, b, c: "); scanf("%d%d%d", &a, &b, &c);
	a = a + b + c;
	b = a - b - c;
	c = a - b - c;
	a = a - b - c;
	printf("a = %d", a);
	printf("\nb = %d", b);
	printf("\nc = %d", c);
	printf("\n");
}