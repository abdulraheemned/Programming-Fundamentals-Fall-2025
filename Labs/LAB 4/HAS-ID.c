#include <stdio.h>
int main(){
	
	
int age,hasId; 
printf("Enter your age: ");
scanf("%d",&age);

if(age>=18){
	printf("Do you have a valid ID?(1 for Yes, 0 for No):  ");
	scanf("%d",&hasId);
	if (hasId){
		printf("You are eligible to vote");
    }
    else{
    	printf("You do not have an ID card.\n");
	}
}
else{
	printf("You are not eligible to vote.\n");
    }
	return 0;	
	
}