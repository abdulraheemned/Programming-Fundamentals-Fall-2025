#include <stdio.h>

int main() {
    char studentName[50];
    float marks, sum = 0, avg;

    
    printf("Enter student name: ");
    scanf("%s", studentName);


    for (int subject = 1; subject <= 5; subject++) {
        printf("Enter marks for subject %d (out of 100): ", subject);
        scanf("%f", &marks);

        
        if (marks < 0 || marks > 100) {
            printf("Invalid marks! Please re-enter.\n");

        }

        sum = sum + marks;
    }

    
    avg = sum / 5;

    
    printf("Student Report\n");
    printf("Name: %s\n", studentName);
    printf("Total Marks: %.2f / 500\n", sum);
    printf("Average: %.2f\n", avg);

    return 0;
}
