//2) Fibonacci Series up to 1000 and Sum of Multiples of 3, 5, 7. 

#include <stdio.h>
int main() {
    int a = 1, b = 1, c;
    int sum = 0;

    printf("Fibonacci Series up to 1000:\n1 1 ");
    while (1) {
        c = a + b;
        if (c > 1000)
            break;
        printf("%d ", c);
        if (c % 3 == 0 || c % 5 == 0 || c % 7 == 0)
            sum += c;
        a = b;
        b = c;
    }

    printf("\nSum of Fibonacci numbers divisible by 3, 5, or 7 = %d\n", sum);
    return 0;
}
