#include<stdio.h>
#include<conio.h>
#include<string.h>
#define length 100
void suaso(char a[], char tg[], int &j) {
	j = 0;
	int count = 0;
	int i = strlen(a)-1;
	while (i >=0) {
		count++;
		if (count % 4 == 0) {
			tg[j] = ',';
			j++;
		}
		else {
			tg[j] = a[i];
			j++;
			i--;
		}
	}
}
void xuatmang(char a[],int n) {
	for (int i = n-1; i >=0; i--) {
		printf("%c", a[i]);
	}

}
void main() {
	char a[length]; 
	char tg[length];
	int j;
	printf("nhap so nguyen: ");
	gets(a);
	suaso(a,tg,j);
	printf("ket qua: ");
	xuatmang(tg,j);
	_getch();
}