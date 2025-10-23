// Q5: Write a program that takes a matrix of any size and returns the maximum element.

#include <stdio.h>

int main() {
    int m, n, i, j, max;
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    int a[m][n];
    printf("Enter matrix elements:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    max = a[0][0];
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (a[i][j] > max)
                max = a[i][j];

    printf("Entered Matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    printf("Maximum element = %d\n", max);
    return 0;
}

