// Q2: Find maximum frequency of a character in student’s name and course name.

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int freq[256] = {0}, i, max = 0;
    char ch;

    printf("Enter your name and course (in one line): ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
        freq[(unsigned char)str[i]]++;

    for (i = 0; i < 256; i++)
        if (freq[i] > max) {
            max = freq[i];
            ch = i;
        }

    printf("Character with maximum frequency: '%c' (%d times)\n", ch, max);
    return 0;
}

