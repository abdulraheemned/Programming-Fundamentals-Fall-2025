//Write a function to find the longest common prefix string amongst an array of strings.

//If there is no common prefix, return an empty string "".
#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char strs[][100], int n) {
    static char prefix[100];
    strcpy(prefix, strs[0]);
int i;
    for (i = 1; i < n; i++) {
        int j = 0;
        while (prefix[j] && strs[i][j] && prefix[j] == strs[i][j]) {
            j++;
        }
        prefix[j] = '\0'; // shorten the prefix
    }

    return prefix;
}

int main() {
    char strs[4][100] = {"flower", "flow", "flight"};
    int n = 3;

    char* prefix = longestCommonPrefix(strs, n);
    if (strlen(prefix) == 0)
        printf("No common prefix found.\n");
    else
        printf("Longest common prefix: %s\n", prefix);

    return 0;
}

