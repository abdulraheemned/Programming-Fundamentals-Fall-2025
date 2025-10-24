//Q5
#include <stdio.h>

int main() {
    float height, width, total;

    printf("Enter height (in feet): ");
    scanf("%f", &height);

    printf("Enter width (in feet): ");
    scanf("%f", &width);

    total = width * 5;   // 5 horizontal boards (top, bottom, 3 shelves)

    printf("Total 12-inch boards needed = %.2f feet", total);
    return 0;
}

