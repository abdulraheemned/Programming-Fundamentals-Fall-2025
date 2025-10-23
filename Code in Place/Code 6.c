#include <stdio.h>

int main() {
    int units,bill;

    printf("Enter units consumed: ");
    scanf("%d", &units);


        if (units <= 100) {
            bill = units * 5;
        } else if (units >= 101 && units <=200) {
            bill = (units-100) * 7 + 500;
        } else {
            bill = (units-200) * 10 + 1200;
        }
        printf("Your electricity bill is %d Rs:", bill);
    }

