#include<stdio.h>
	int main(){
	char alpha;
	printf("Enter value of character: ");
	scanf("%c", &alpha);
	int ascii = (int)alpha;
	int newascii = ascii+32;
	char newAlpha = (char)newascii;
	printf("Lower case correponding alphabate : %c ", newAlpha);
	return 0;
	}
