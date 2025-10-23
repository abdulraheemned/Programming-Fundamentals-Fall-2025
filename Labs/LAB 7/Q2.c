// Q2: Write a C program to read elements in a matrix and check whether matrix is Sparse matrix or not.

#include <stdio.h>

int main() {
    int m, n, i, j, count = 0;
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];
    printf("Enter elements:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 0)
                count++;
        }

    if (count > (m * n) / 2)
        printf("Matrix is Sparse.\n");
    else
        printf("Matrix is not Sparse.\n");

    return 0;
}

