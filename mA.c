#include <stdio.h>

void mergeArrays(int arr1[], int arr2[], int size, int mergedArr[])
{
    int i = size - 1;       // Index for arr1 (starting from the largest element if sorted ascending, but we manage indices for descending merge)
    int j = size - 1;       // Index for arr2
    int k = (size * 2) - 1; // Index for the mergedArr (starting from the end)

    // The logic below assumes descending sort and builds the merged array from the largest elements downwards
    // Since input arrays are descending, we iterate them from the beginning to put larger elements in the beginning of the merged array
    int m = 0; // index for arr1 from start
    int n = 0; // index for arr2 from start
    int o = 0; // index for mergedArr from start

    while (m < size && n < size)
    {
        if (arr1[m] >= arr2[n])
        {
            mergedArr[o++] = arr1[m++];
        }
        else
        {
            mergedArr[o++] = arr2[n++];
        }
    }

    // Copy remaining elements of arr1 if any
    while (m < size)
    {
        mergedArr[o++] = arr1[m++];
    }

    // Copy remaining elements of arr2 if any
    while (n < size)
    {
        mergedArr[o++] = arr2[n++];
    }
}

int main()
{
    int size = 5;
    // Input arrays, sorted in descending order
    int arr1[] = {50, 40, 30, 20, 10};
    int arr2[] = {45, 35, 25, 15, 5};
    int mergedArr[size * 2]; // Result array with double the size

    mergeArrays(arr1, arr2, size, mergedArr);

    printf("Merged array in descending order: ");
    for (int i = 0; i < size * 2; i++)
    {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");

    return 0;
}
