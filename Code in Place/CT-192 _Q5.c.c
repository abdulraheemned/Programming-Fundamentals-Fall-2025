#include <stdio.h>
int main(){
	float Celsius;
	printf("Enter temperature in Celsius: ");
	scanf("%f",&Celsius);	
	float fahrenheit = (Celsius*9/5) + 32;
	printf("%.2f Celsius = %.2f fahrenheit", Celsius,fahrenheit);
	
	if(Celsius >= 30){
		printf("\nit's hot!Stay hydrated and wear light clothes.");
	}
		else if(Celsius >= 20 && Celsius <= 29){
		printf("\nNice weather!Perfect for outdooor activities.");
	}
  	else if(Celsius >= 10 && Celsius <= 19){
		printf("\nCool weather!Wear a light jacket.");
	}
  	else if(Celsius >= 0 && Celsius <= 9){
		printf("\nCold!Wear warm clothes.");
	}
  	else if(Celsius <= 0){
		printf("\nFreezing!Stay indoors and bundle up.");
	}
	
	
}
