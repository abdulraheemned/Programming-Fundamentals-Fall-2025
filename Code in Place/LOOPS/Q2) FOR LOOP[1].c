//find the factorial of a given number using for loop
#include <stdio.h>
int main(){
	int num,i; 
	int factorial=1;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
		factorial*=i;
	}
	printf("The factorial of the given number:%d",factorial);
	
}
