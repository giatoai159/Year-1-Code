#include<stdio.h>
#include<conio.h>
#include<string.h>
#define maxlength 100

void ThemDau(char a[], char b[], int &j) {
	j = 0;
	int count = 0;
	int i = strlen(a) - 1;
	while (i >= 0)
	{
		count++;
		if (count % 4 == 0) {
			b[j] = ',';
			j++;
		}
		else {
			b[j] = a[i];
			j++;
			i--;
		}
	}
}
void xuatmang(char a[], int n) {
	for (int i = n - 1; i >= 0; i--) {
		printf("%c", a[i]);
	}

}
void main() {
	char a[maxlength];
	char b[maxlength];
	int j;
	printf("Nhap so nguyen: "); gets_s(a);
	ThemDau(a, b, j);
	printf("Ket qua: ");
	xuatmang(b, j);
}