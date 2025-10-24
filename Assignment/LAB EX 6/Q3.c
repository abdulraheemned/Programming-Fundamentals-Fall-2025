//3) Prime or Palindrome Checker for 5-digit Number 
#include <stdio.h>

int main() {
    int n, sum = 0, temp, digit, rev = 0, i, prime = 1;

    printf("Enter a 5-digit number: ");
    scanf("%d", &n);

    temp = n;
    while (temp != 0) {
        digit = temp % 10;
        sum += digit;
        temp /= 10;
    }

    if (sum % 2 == 0) { // Check Prime
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                prime = 0;
                break;
            }
        }
        if (prime)
            printf("%d is a prime number.\n", n);
        else
            printf("%d is not a prime number.\n", n);
    } else { // Check Palindrome
        temp = n;
        while (temp != 0) {
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }
        if (rev == n)
            printf("%d is a palindrome number.\n", n);
        else
            printf("%d is not a palindrome.\n", n);
    }

    return 0;
}
