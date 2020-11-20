#include<stdio.h>;
#include<math.h>;

void main()
{
	const double pi = 3.1415;
	float h1, h2, h3, lp, tt1, tt2;
	printf("Nhap chieu cao, chieu sau, chieu rong khoi hop: "); scanf("%f%f%f", &h1, &h2, &h3);
	printf("Nhap canh hinh lap phuong: "); scanf("%f", &lp);
	printf("Nhap ban kinh va chieu cao khoi tru tron: "); scanf("%f%f", &tt1, &tt2);
	printf("Dien tich be mat khoi hop = %0.2f", (2 * h1*h2) + (2 * h1*h3) + (2 * h2*h3));
	printf("\nThe tich khoi hop = %0.2f", h1*h2*h3);
	printf("\nDien tich be mat khoi lap phuong = %0.2f", lp*lp * 6);
	printf("\nThe tich khoi lap phuong = %0.2f", pow(lp, 3));
	printf("\nDien tich be mat hinh tru tron = %0.2f", 2 * pi*tt1*(tt1 + tt2));
	printf("\nThe tich hinh tru tron = %0.2f", pi*pow(tt1, 2)*tt2);
	printf("\n");
}