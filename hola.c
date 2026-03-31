#include <stdio.h>
int main()
{
    int n, a[100], min, temp;
    printf("Enter size: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n - 1; i++)
    {
        min = i; // Assume current is smallest
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[min])
                min = j;
        temp = a[min];
        a[min] = a[i];
        a[i] = temp; // Swap
    }
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
