 //WAF to print ASCII value of given alfabhate

#include<stdio.h>
	int main() {
	char alfabhate;
	printf("enter alfabhate : ");
	scanf("%c", &alfabhate);
	int ascii = (int)alfabhate; //Type casting (jisme covert krna ho)jisko convert karna bo
	printf("ASCII value of given alfabhate : %d", ascii);
	return 0;
	}
