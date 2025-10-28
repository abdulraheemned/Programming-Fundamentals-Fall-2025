#include <stdio.h>
#include <string.h>
int main(){
	int arr[]={1,2,3,4},i,reversearray;
	for(i=3;i>=0;i--){
		reversearray=arr[i];
		printf("%d ", reversearray);
	}
}
