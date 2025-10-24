#include <stdio.h>

int main() {
    float num1, num2;
    int choice;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("\nChoose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1–4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("\nResult: %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;

        case 2:
            printf("\nResult: %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;

        case 3:
            printf("\nResult: %.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;

        case 4:
            if (num2 != 0)
                printf("\nResult: %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            else
                printf("\nError: Division by zero is not allowed.\n");
            break;

        default:
            printf("\nInvalid choice. Please enter a number between 1 and 4.\n");
    }

    return 0;
}
