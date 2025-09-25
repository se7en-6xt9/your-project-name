#include<stdio.h>
   int  main() {
   int a,b,c;
   char choice;
   printf("This program is to perform operation\n");
   printf("Enter first number : ");
   scanf("%d", &a);
   printf("Enter second number : ");
   scanf("%d", &b);
   printf("Enter operator\n");
   printf("	MENUE\n	Substraction = -\n 	Add = +\n 	Multiplication = *\n 	Divide = /\n");

   scanf(" %c", &choice);
   printf("---------------The output is given below--------------------\n");
   if(choice == '+'){
    c = a+b;
    printf("Addition is : %d", c);
    } else if(choice == '-'){
    c = a-b;
   printf("Substraction is : \n%d", c);
    }  else if(choice == '*'){
    c = a*b;
   printf("Multiplication : \n%d", c);
   } else if(choice == '/'){
   c = a/b;
   printf("Divide : \n%d", c);
   } else {
    printf("Wrong operator choosen.\n please choose correct operator\n");
	}
	 }

