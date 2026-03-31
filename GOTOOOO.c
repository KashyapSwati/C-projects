#include <stdio.h>
int main()
{
    int n;
    n = 1;
repeat:
    printf("%d\n", n);
    n++;
    if (n <= 10)
        goto repeat;
    return 0;
}