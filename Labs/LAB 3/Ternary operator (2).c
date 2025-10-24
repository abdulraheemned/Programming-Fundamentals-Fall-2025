//leap year
#include <stdio.h>
int main() {
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    (year % 400 == 0) ? printf("Leap year\n") :
    (year % 100 == 0) ? printf("Not leap year\n") :
    (year % 4 == 0) ? printf("Leap year\n") :
    printf("Not leap year\n");

    return 0;
}