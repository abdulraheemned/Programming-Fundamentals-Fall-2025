//reverse a number using for loop
#include <stdio.h>
int main(){
	int num;
	int reverse=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	while(num!=0){
		int digit = num % 10;
		reverse= (reverse*10)+ digit;
		num = num/10;
	}
	printf("The number reversed is: %d",reverse);
	
}
