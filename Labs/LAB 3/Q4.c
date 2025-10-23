4) 4?? Explain output of C code (wrong value reason)

?? Usually this happens because of missing & in scanf(), incorrect format specifier, or uninitialized variable.

#include <stdio.h>
int main() {
    int testInteger;
    printf("Enter an integer: ");
    scanf("%d", &testInteger); // Correct use of &
    printf("Number is %d\n", testInteger);
    return 0;
}
