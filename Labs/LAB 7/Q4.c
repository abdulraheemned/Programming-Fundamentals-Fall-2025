// Q4: Take a square matrix, transpose it, and check whether it is symmetric or not.

#include <stdio.h>

int main() {
    int n, i, j, symmetric = 1;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int a[n][n], transpose[n][n];
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    // Transpose
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            transpose[j][i] = a[i][j];

    // Check symmetry
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (a[i][j] != transpose[i][j])
                symmetric = 0;

    if (symmetric)
        printf("Matrix is symmetric.\n");
    else
        printf("Matrix is asymmetric.\n");

    return 0;
}

