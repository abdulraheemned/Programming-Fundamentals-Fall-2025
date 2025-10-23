#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter the side lengths of triangle:\n");
   
    printf("1st side(a): ");
    scanf("%d", &a);
    printf("2nd side(b): ");
    scanf("%d", &b);
    printf("3rd side(c): ");
    scanf("%d", &c);

    if ((a+b) > c && (b+c) > a && (a+c) > b) {
        if (a==b&&b==c&&a==c) {
            printf("This is an Equilateral Triangle.");
        } else if (a==b || b==c || a==c) {
            printf("This is an Isosceles Triangle.");
        } else {
            printf("This is a Scalene Triangle.");
        }
    }
    else printf("Not a valid Triangle.");
    return 0;
}
