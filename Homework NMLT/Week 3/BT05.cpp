#include<stdio.h>;

void main()
{
	int a, b, c;
	do
	{
		printf("Nhap 3 canh tam giac: "); scanf("%d%d%d", &a, &b, &c);
		if (a == 0) {
			printf("Du lieu a khong hop le, nhap lai a: "); scanf("%d", &a);
		}
		if (b == 0) {
			printf("Du lieu b khong hop le, nhap lai b: "); scanf("%d", &b);
		}
		if (c == 0) {
			printf("Du lieu c khong hop le, nhap lai c: "); scanf("%d", &c);
		}
	} while (a == 0 || b == 0 || c == 0);
	if (a + b > c && a + c > b && b + c > a)
	{
		printf("Day la mot tam giac ");
		if (a == b && b == c && c == a) printf("deu.\n");
		else if (a == b || b == c || a == c) printf("can.\n");
		else if ((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == b*b + a*a))
			{
			if (a == b || b == c || c == a) printf("vuong can.\n");
			else printf("vuong.\n");
			}
		else printf("thuong.\n");
	}
	else printf("Day khong phai la mot tam giac.\n");
}