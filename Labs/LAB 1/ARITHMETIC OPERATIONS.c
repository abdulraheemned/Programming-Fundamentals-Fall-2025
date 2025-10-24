#include <stdio.h>

int main() {
    float a, b;

    printf("Enter first number (a): ");
    scanf("%f", &a);

    printf("Enter second number (b): ");
    scanf("%f", &b);

    printf("\nArithmetic Operations:\n");
    printf("Addition: %.2f + %.2f = %.2f\n", a, b, a + b);
    printf("Subtraction: %.2f - %.2f = %.2f\n", a, b, a - b);
    printf("Multiplication: %.2f * %.2f = %.2f\n", a, b, a * b);
    printf("Division: %.2f / %.2f = %.2f\n", a, b, a / b);

    return 0;
}
