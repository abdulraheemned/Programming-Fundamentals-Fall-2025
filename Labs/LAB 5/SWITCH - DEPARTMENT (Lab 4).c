#include <stdio.h>

int main() {
    int dep, subDept;

    printf("Select your Department:\n");
    printf("1. Computer Science\n");
    printf("2. Electrical Engineering\n");
    printf("3. Mechanical Engineering\n");
    printf("Enter your choice: ");
    scanf("%d", &dep);

    switch (dep) {
        case 1:
            printf("You selected Computer Science.\n");
            printf("Choose your specialisation:\n");
            printf("1. CSIT\n");
            printf("2. CSDS\n");
            printf("3. CSCR\n");
            printf("Enter your choice: ");
            scanf("%d", &subDept);

            switch (subDept) {
                case 1: printf("You are from CSIT specialization.\n"); break;
                case 2: printf("You are from CSDS specialization.\n"); break;
                case 3: printf("You are from CSCR specialization.\n"); break;
                default: printf("Invalid specialization choice!\n");
            }
            break;

        case 2:
            printf("You selected Electrical Engineering.\n");
            break;

        case 3:
            printf("You selected Mechanical Engineering.\n");
            break;

        default:
            printf("Invalid department choice!\n");
    }

    return 0;
}
