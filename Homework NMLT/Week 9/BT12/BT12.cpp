#include<stdio.h>
#include<conio.h>
#include<string.h>
#define maxlength 100
void Sapxep(char a[]) {
	char max = a[0];
	for (int i = 0; i < strlen(a); i++) {
		for (int j = i+1; j < strlen(a); j++) {
			if (a[j] < a[i]) {
				char temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
void main() {
	char a[maxlength];
	printf("Nhap chuoi: "); gets_s(a);
	printf("Chuoi da nhap: ");
	puts(a);
	Sapxep(a);
	printf("Sau khi sap xep theo abcdef: ");
	puts(a);
}