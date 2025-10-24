//binary operator
#include <stdio.h>
int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    printf("Number * 2 = %d\n", num << 1);
    return 0;
}