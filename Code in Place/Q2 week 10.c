#include <string.h>
#include <stdio.h>
int main(){
	char ch[]={"Hello"};
	char des[20];
	strcpy(des,ch);
	printf("Copied string:%s",des);
}
