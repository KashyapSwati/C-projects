#include <stdio.h>

// Function to swap two elements using pointers
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform optimized bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j, swapped;

    // Outer loop for each pass
    for (i = 0; i < n - 1; i++)
    {
        swapped = 0; // Reset flag for each pass

        // Inner loop for comparing adjacent elements
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]); // Swap if in wrong order
                swapped = 1;                // Mark that a swap occurred
            }
        }

        // If no swaps occurred, array is sorted
        if (swapped == 0)
            break;
    }
}

// Function to print the array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Main function to test the bubble sort
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted Array: ");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Sorted Array: ");
    printArray(arr, n);

    return 0;
}