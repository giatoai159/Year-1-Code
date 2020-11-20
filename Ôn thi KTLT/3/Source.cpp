#include<stdio.h>;
#include<conio.h>;
#include<stdlib.h>;
#include<math.h>;

struct ptbac2
{
	float s1, s2, s3;
};
void NhapPTB2(ptbac2 pt[],int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("Nhap he so phuong trinh bac hai thu %d: ", i + 1); scanf("%f%f%f", &pt[i].s1, &pt[i].s2, &pt[i].s3);
	}
}
void xuatrafile(FILE *file, ptbac2 pt[], int n)
{
	fprintf(file, "%d\n", n);
	for (int i = 0; i < n; i++)
	{
		fprintf(file, "%.f", pt[i].s1);
		fprintf(file, " %.f", pt[i].s2);
		fprintf(file, " %.f", pt[i].s3);
		fprintf(file, "\n");
	}
}

void giaiphuongtrinhbachai(FILE *fo, ptbac2 pt[], int n) {
	float x1, x2, delta;
	for (int i = 0; i < n; i++) {
		fprintf(fo, "Phuong trinh thu %d: %.fx^2 + %.fx + %.f = 0 ", i + 1, pt[i].s1, pt[i].s2, pt[i].s3);
		if (pt[i].s1 == 0)
		{
			if (pt[i].s2 == 0)
			{
				if (pt[i].s3 == 0) fprintf(fo, "Phuong trinh vo so nghiem");
				else fprintf(fo, "Phuong trinh vo nghiem");
			}
			else
			{
				x1 = -pt[i].s3 / pt[i].s2;
				fprintf(fo, "Phuong trinh co 1 nghiem:%f", x1);
			}
		}
		else
		{
			delta = pt[i].s2 * pt[i].s2 - 4 * pt[i].s1*pt[i].s3;
			if (delta < 0) fprintf(fo, "Phuong trinh vo nghiem");
			if (delta == 0)
			{
				x1 = -pt[i].s2 / (2 * pt[i].s1);
				fprintf(fo, "Phuong trinh da nghiem kep:%f", x1);
			}
			if (delta > 0)
			{
				x1 = (-pt[i].s2 + sqrt(delta)) / (2 * pt[i].s1);
				x2 = (-pt[i].s2 - sqrt(delta)) / (2 * pt[i].s1);
				fprintf(fo, "Phuong trinh co 2 nghiem phan biet: ");
				fprintf(fo, "x1= %f\t", x1);
				fprintf(fo, "x2= %f", x2);
			}
		}
		fprintf(fo, "\n");
	}
}

void main()
{
	FILE *PTB2, *GIAIPTB2;
	PTB2 = fopen("PTB2.txt", "w+");
	GIAIPTB2 = fopen("GIAIPTB2.txt", "w+");
	ptbac2 pt[100];
	int n;
	printf("Nhap so phuong trinh bac hai: "); scanf("%d", &n);
	NhapPTB2(pt, n);
	xuatrafile(PTB2, pt, n);
	giaiphuongtrinhbachai(GIAIPTB2, pt, n);
	fclose(PTB2);
	fclose(GIAIPTB2);
}