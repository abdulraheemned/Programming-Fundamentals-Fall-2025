#include <stdio.h>
int main(){
	int num,i,j;
	printf("Enter a number: ");
	scanf("%d",&num);
	for (i=1;i<=num;i++){
		for(j=num;j>=1;j--){
			if((i+j) % 2 == 0){
				printf("(%d,%d)",i,j);
			}
		}
	}
	
}
