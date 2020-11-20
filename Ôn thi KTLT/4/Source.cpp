#include<stdio.h>;
#include<string.h>;

int power(int x,int y)
{
	int p=x,temp = x;
	for (int i = 1; i < y; i++) 
	{
		for (int j = 1; j < x; j++) 
		{
			p += temp;
		}
		temp = p;
	}
	return p;
}

void main()
{
	int x, y;
	printf("Nhap x,y : "); scanf("%d%d", &x, &y);
	printf("%d\n", power(x, y));
}