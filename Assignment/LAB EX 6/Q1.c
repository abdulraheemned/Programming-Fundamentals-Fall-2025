//1)Factorial Program. 

#include <stdio.h>
int main() {
    int n;
    unsigned long long fact = 1;
    printf("Enter a positive number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input! Exiting program.\n");
        return 0;
    }

    for (int i = 1; i <= n; i++)
        fact *= i;

    printf("Factorial of %d = %llu\n", n, fact);
    return 0;
}
