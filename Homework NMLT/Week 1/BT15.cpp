#include<stdio.h>;
#include<math.h>;

void main()
{
	float q, m, s;
	int n;
	printf("Nhap vao so tien gui: "); scanf("%f", &m);
	printf("Nhap vao so thang gui: "); scanf("%d", &n);
	printf("Nhap lai suat: "); scanf("%f", &q);
	s = m*pow(1 + q, n);
	printf("So tien lai la = %0.2f", s - m);
	printf("\n");
}