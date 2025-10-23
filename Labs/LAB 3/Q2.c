2) Salary and Tax Calculation.

#include <stdio.h>
int main() {
    float salary, taxRate, tax, netSalary;

    printf("Enter salary: ");
    scanf("%f", &salary);
    printf("Enter tax rate (in percentage): ");
    scanf("%f", &taxRate);

    tax = (taxRate / 100) * salary;
    netSalary = salary - tax;

    printf("Tax to pay: %.2f\n", tax);
    printf("Salary after tax: %.2f\n", netSalary);
    return 0;
}
