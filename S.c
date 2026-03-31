#include <stdio.h>
void main()
{
    int i, j, n = 20, key;
    scanf("%d", &n);
    int ar[100];
    for (i = 0; i < n; i++)
    {
        printf("enter the  elements: ");
        scanf("%d", &ar[i]);
    }
    for (i = 1; i < n; i++)
    {
        key = ar[i];
        j = i - 1;
        while (j >= 0 && ar[j] > key)
        {
            ar[j + 1] = ar[j];
            j = j - 1;
        }
        ar[j + 1] = key;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d", ar[i]);
    }
}