/*3. Write a function swap(int *a, int *b) that swaps the values of two integers using pointers. 
      In main(), declare two integers (e.g., x = 10, y = 20), print them, call swap(&x, &y), 
      then print again to show they’ve been swapped. */

#include <stdio.h>

// Function definition to swap using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;

    printf("Before swapping: x = %d, y = %d\n", x, y);

    // Function call with addresses
    swap(&x, &y);

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}

