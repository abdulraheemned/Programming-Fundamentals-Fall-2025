//Q3 Ask a user to enter a number and then display the factorial of the entered number.
#include <stdio.h>

int main() {
    int n, i;
    long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
        fact = fact * i;

    printf("Factorial = %ld", fact);
    return 0;
}

