#include<stdio.h>
#include<conio.h>
#include<string.h>
#define maxlength 100

void SoLanXuatHien(char a[],int n)
{
	int i, j, xuathien, b[maxlength], c[maxlength], d[maxlength], m = 0, k = 0, max = 0;
	char cmax;
	for (i = 0; i < n; i++)
	{
		xuathien = 1;
		if (b[i])
		{
			b[i] = 0;
			for (j = i + 1; j < n; j++)
			{
				if (a[i] == a[j])
				{
					xuathien++;
					b[j] = 0;
				}
			}
			c[m++] = xuathien;
			d[k++] = a[i];
		}
	}
	for (i = 0; i < m; i++)
	{
		if (c[i] > max)
		{
			max = c[i];
			cmax = d[i];
		}
	}
	printf("Ki tu xuat hien nhieu nhat la '%c' voi %d lan xuat hien.\n", cmax, max);
}
void main() {
	char a[maxlength];
	int n;
	printf("Nhap chuoi S: "); gets_s(a);
	n = strlen(a);
	SoLanXuatHien(a, n);
}