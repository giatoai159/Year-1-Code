#include<stdio.h>;
#include<math.h>;

void main()
{
	float a, b, c, dt, x1, x2, kq1n;
	printf("Nhap a, b, c : "); scanf("%f%f%f", &a, &b, &c);
	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0) printf("Phuong trinh vo so nghiem.\n");
			else printf("Phuong trinh vo nghiem.\n");
		}
		else
		{
			kq1n = -c / b;
			printf("x = %.2f\n", kq1n);
		}
	}
	else
	{
		dt = b*b - (4 * (a*c));
		if (dt > 0)
		{
			x1 = (-b + sqrt(dt)) / 2 * a;
			x2 = (-b - sqrt(dt)) / 2 * a;
			printf("Nghiem cua phuong trinh la x1 = %.2f, x2 = %.2f.\n", x1, x2);
		}
		else if (dt == 0) printf("Phuong trinh co nghiem kep x = %.2f.\n", -b / 2 * a);
		else printf("Phuong trinh vo nghiem.\n");
	}
}