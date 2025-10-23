#include <stdio.h>
int main(){
	int code;
	printf("select your code (1-7)");
	scanf("%d",&code);
	switch(code){
		case 1 : printf("monday");
		break;
		case 2 : printf("tuesday");
		break;
		case 3 : printf("wed");
		break;
		case 4 : printf("thurs");
		break;
		case 5 : printf("friday");
		break;
		case 6 : printf("saturday");
		break;
		case 7 : printf("sunday");
		break;
	}
}
