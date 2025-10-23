//Q1) Write a C Program to play beep five times.

#include <stdio.h>
int main() {
    for(int i = 0; i < 5; i++) {
        printf("\a"); // Beep sound
    }
    return 0;
}
