// Q1: Write a program that reads the numbers from user and store these numbers into an array of same size. 
// Find and display the sum of all positive numbers and calculate the average.

#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, avg;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0)
            sum += arr[i];
    }

    avg = sum / n;
    printf("Sum of positive numbers = %.2f\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}

