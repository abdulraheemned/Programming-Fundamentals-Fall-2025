#include <string.h>
#include <stdio.h>
int main(){
	char a[20]="Good";
	char b[]="Morning";
	strcat(a,b);
	printf("New String:%s",a);
}
