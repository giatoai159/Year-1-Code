#include<stdio.h>
#include<conio.h>
#include<string.h>
#define length 100
void sapxep(char a[]) {
	char max = a[0];
	for (int i = 0; i < strlen(a)-1; i++) {
		for (int j = i; j < strlen(a); j++) {
			if (a[j] < a[i]) {
				char temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
void main() {
	char a[length];
	printf("nhap chuoi: ");
	gets(a);
	printf("truoc khi sap xep: ");
	puts(a);
	sapxep(a);
	printf("sau khi sap xep: ");
	puts(a);
	_getch();
}