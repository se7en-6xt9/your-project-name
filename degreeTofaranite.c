#include<stdio.h>
 int main() {
	int temp;
	printf("Enter temperature in degree celcius = ");
	scanf("%d", &temp);
	int faranite = (9/5)*temp+32;
	printf("Temperature in faranitr is = %d", faranite);
	
	}
