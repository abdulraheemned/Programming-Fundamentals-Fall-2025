#include <stdio.h>
int main(){
	int i = 1; 
	float sum = 1.0;
	
	while((4*i)<=400){
		printf("+1/%d",i);
		sum = sum + (1.0/(4*i));
		i++;
	}
  	printf("S=%2f",sum);
	return 0;
}