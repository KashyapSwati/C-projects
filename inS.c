#include <stdio.h>
void main()
{
    int i, j, n, temp, min, key;
    scanf("%d", &n);

    int ar[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (i = 1; i < n; i++)
    {
        key = ar[i];
        j = j - 1;
        while (j >= 0 && ar[j] > key)
        {
            ar[j + 1] = ar[j];
            j = j + 1;
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d", ar[i]);
    }
}