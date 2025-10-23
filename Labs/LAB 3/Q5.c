5) Simple Interest Calculation with Conditions

#include <stdio.h>
int main() {
    float principal, rate, time, interest;

    printf("Enter Principal (100–1000000): ");
    scanf("%f", &principal);
    if (principal < 100 || principal > 1000000) {
        printf("Invalid Principal amount.\n");
        return 0;
    }

    printf("Enter Rate of Interest (5–10): ");
    scanf("%f", &rate);
    if (rate < 5 || rate > 10) {
        printf("Invalid Rate of Interest.\n");
        return 0;
    }

    printf("Enter Time Period (1–10 years): ");
    scanf("%f", &time);
    if (time < 1 || time > 10) {
        printf("Invalid Time Period.\n");
        return 0;
    }

    interest = (principal * rate * time) / 100;
    printf("Simple Interest = %.2f\n", interest);
    return 0;
}
