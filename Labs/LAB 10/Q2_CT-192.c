/* 2. Write a function cube(int x) that takes one integer argument and returns its cube (x * x * x). 
      In main(), ask the user for a number, call cube(), and print the result.*/
      
#include <stdio.h>

// Function definition to return cube
int cube(int x) {
    return x * x * x;
}

int main() {
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = cube(num);

    printf("Cube of %d is: %d\n", num, result);

    return 0;
}
