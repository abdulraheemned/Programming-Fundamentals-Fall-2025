// Q1: Create a program that takes first and last name, combines them, and prints the string backwards.

#include <stdio.h>
#include <string.h>

int main() {
    char first[50], last[50], full[100];
    int i;

    printf("Enter first name: ");
    gets(first);
    printf("Enter last name: ");
    gets(last);

    strcpy(full, first);
    strcat(full, " ");
    strcat(full, last);

    printf("Full name: %s\n", full);
    printf("Reversed: ");
    for (i = strlen(full) - 1; i >= 0; i--)
        printf("%c", full[i]);
    printf("\n");

    return 0;
}

