#include<stdio.h>;
#include<conio.h>;

void main()
{
	char ten[50];
	float toan, ly, hoa, dtb;
	printf("Nhap ten: "); 
	fflush(stdin);
	gets_s(ten);
	printf("Nhap diem Toan, Ly, Hoa cua hoc sinh: "); scanf("%f%f%f", &toan, &ly, &hoa);
	dtb = (toan + ly + hoa) / 3;
	if (dtb >= 9) printf("Hoc sinh xuat sac voi diem %.1f", dtb);
	else if (dtb<9 && dtb>=8) printf("Hoc sinh gioi voi diem %.1f", dtb);
	else if (dtb<8 && dtb >= 6.5) printf("Hoc sinh kha voi diem %.1f", dtb);
	else if (dtb<6.5 && dtb >= 5) printf("Hoc sinh trung binh voi diem %.1f", dtb);
	else if (dtb<5 && dtb >= 3) printf("Hoc sinh yeu voi diem %.1f", dtb);
	else printf("Hoc sinh yeu voi diem %.1f", dtb);
}