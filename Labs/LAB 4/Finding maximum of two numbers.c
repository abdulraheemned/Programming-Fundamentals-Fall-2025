//Find maximum of two numbers. 
#include <stdio.h>
int main( ){
 int num1, num2;
 printf("Input the value of first number:");
 scanf("%d", &num1);
 printf("Input the value of second number:");
 scanf("%d",&num2);
 if (num1 !=num2)
 printf("Num1 is not equal to Num2\n");
 else if (num1 > num2)
 printf("Num1 is greater than Num2\n");
 else if (num2 > num1)
 printf("Num2 is greater than Num1\n");
 else
 printf("Num1 is equal to Num2\n");
 return 0;
}