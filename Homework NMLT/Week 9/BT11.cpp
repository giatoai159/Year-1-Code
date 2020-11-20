#include<stdio.h>
#include<conio.h>
#include<string.h>
#define length 100
void solanxuathien(char s1[], char s2[], int &time) {
	time = 0;
	for (int i = 0; i < strlen(s1) - 1; i++) {
		int count = 0;
		int k = i;
			for (int j = 0; j < strlen(s2); j++) {
				if (s1[k] != s2[j]) {
					count = 1;
					break;
				}
				k++;
			}
			if (count == 0) {
				printf("Vi tri: a[%d] \n", i);
				time++;
			}
		}
	}
void main() {
	char s1[length];
	char s2[length];
	int time;
	printf("nhap chuoi s1: ");
	gets(s1);
	printf("nhap chuoi s2: ");
	gets(s2);
	solanxuathien(s1, s2, time);
	printf("S1 xuat hien %d lan trong xau S2", time);
	_getch();
}