#include<stdio.h>;

void main()
{
	float km, giatien;
	printf("Nhap so km: "); scanf("%f", &km);
	if (km <= 1) giatien = 15000;
	else if (km >= 2 && km <= 5) giatien = km * 13500;
	else if (km >= 6)
	{
		if (km > 120) giatien = (km * 11000) - (((km * 11000) * 10) / 100);
		else giatien = km * 11000;
	}
	printf("Gia tien phai tra la %.0f", giatien);
}