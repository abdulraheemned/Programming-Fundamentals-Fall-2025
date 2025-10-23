#include <stdio.h>
int main(){
	float Celsius,Fahrenheit;
	printf("Enter a temperature in Celsius: ");
	scanf("%f", &Celsius);
	Fahrenheit = (Celsius*9/5) + 32;
	printf("Temperature in Fahrenheit is: %.2f", Fahrenheit);
	return 0;
}

/*
observations:
1. Input = 100 Celsius -> Output = 212.00 Fahrenheit
2. Input = 0 Celsius -> Output = 32.00 Fahrenheit
3. Input = -40 Celsius -> Output = -40.00 Fahrenheit
*/
