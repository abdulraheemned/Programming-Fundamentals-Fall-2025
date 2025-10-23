#include <stdio.h>
int main(){
	int dept,subdept;
	printf("1-CS\n 2-EE\n 3-ME\n 4-SE");
	printf("Select your dept(1-4)");
	scanf("%d",&dept);
	switch(dept){
		case 1: printf("Welcome in CS");
		        printf("choose your subdept");
		        printf("1-AI\n");
		        printf("2-DS\n");
		        printf("3-CS\n");
		        printf("4-GA\n");
		        printf("select (1-4)");
		        scanf("%d",&subdept);
		        switch(subdept){
		        
		        	case 1 : printf("you selected AI");
		        	break;
		        	case 2 : printf("you selected DS");
		        	break;
		        	case 3 : printf("you selected CS");
		        	break;
		        	case 4 : printf("you selected GA");
		        	break;
						}
		break;
		case 2: printf("Welcome in EE");
		break;
		case 3: printf("Welcome in ME");
		break;
		case 4: printf("Welcome in SE");
		break;
	}
	return 0;
}
