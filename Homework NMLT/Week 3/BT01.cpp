#include<stdio.h>;
#include<ctype.h>;
#include<conio.h>;

void main()
{
	char c;
	printf("Nhap mot ki tu");
	c = getch();
	if (isupper(c))
	{
		c = tolower(c);
		printf("Ki tu da chuyen thanh chu thuong: %c\n", c);
	}
	else if (islower(c))
	{
		c = toupper(c);
		printf("Ki tu da chuyen thanh chu hoa: %c\n", c);
	}
}