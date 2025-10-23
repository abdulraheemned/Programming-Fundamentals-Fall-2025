// Q3: Write a program that asks user for first name and last name, concatenates them and counts total characters.

#include <stdio.h>
#include <string.h>

int main() {
    char first[50], last[50], full[100];

    printf("Enter first name: ");
    gets(first);
    printf("Enter last name: ");
    gets(last);

    strcpy(full, first);
    strcat(full, " ");
    strcat(full, last);

    printf("Full name: %s\n", full);
    printf("Number of characters in full name: %lu\n", strlen(full));

    return 0;
}

