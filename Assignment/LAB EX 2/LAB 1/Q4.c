//Q4
#include <stdio.h>

int main() {
    int people = 25, pages = 140, extra = 5;
    int totalPages, reams;

    totalPages = (people + extra) * pages;
    reams = (totalPages + 499) / 500;  // round up

    printf("Total pages = %d\n", totalPages);
    printf("Reams needed = %d", reams);

    return 0;
}

