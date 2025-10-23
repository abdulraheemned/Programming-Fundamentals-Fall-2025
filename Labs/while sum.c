#include <stdio.h>
int main(){
	double sum=1.0;
	int i=4;
	while(i<=400){
		sum=sum+(1.0/i);
		i=i+4;
	}
	printf("%f", sum);
}
