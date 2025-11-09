//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.//
#include <stdio.h>

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9,i,j;
    int size = sizeof(nums) / sizeof(nums[0]);

    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (nums[i] + nums[j] == target) {
                printf("Indices: %d and %d\n", i, j);
                printf("Numbers: %d + %d = %d\n", nums[i], nums[j], target);
                return 0;
            }
        }
    }

    printf("No solution found.\n");
    return 0;
}

