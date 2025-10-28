#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = 4,i; 

    int first = arr[0];
    int second = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > first) {  
            second = first;
            first = arr[i];
        } 
        else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    printf("Two largest numbers are: {%d, %d}\n", second, first);
    return 0;
}

