#include <stdio.h>
int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	int digit, sum = 0;
	do{
		digit= num % 10 ;
		sum+=digit;
		num = num / 10;
		
	}while(num!=0);
	printf("The sum of the digits of the number is: %d",sum);
}
