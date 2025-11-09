//Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.
#include <stdio.h>

int main() {
    int nums1[] = {1, 3};
    int nums2[] = {2, 4, 6};
    int m = sizeof(nums1)/sizeof(nums1[0]);
    int n = sizeof(nums2)/sizeof(nums2[0]);

    int total = m + n;
    int merged[total];
    int i = 0, j = 0, k = 0;

    // Merge both sorted arrays
    while (i < m && j < n) {
        if (nums1[i] < nums2[j])
            merged[k++] = nums1[i++];
        else
            merged[k++] = nums2[j++];
    }

    while (i < m)
        merged[k++] = nums1[i++];

    while (j < n)
        merged[k++] = nums2[j++];

    double median;
    if (total % 2 == 0)
        median = (merged[total/2 - 1] + merged[total/2]) / 2.0;
    else
        median = merged[total/2];

    printf("Merged Array: ");
    int x;
    for (x = 0; x < total; x++)
        printf("%d ", merged[x]);
    
    printf("\nMedian: %.2f\n", median);

    return 0;
}

