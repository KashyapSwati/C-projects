#include <stdio.h>
int main()
{
    int x, y, *ptr1, *ptr2, sum;
    printf("enter two numbers :");
    scanf("%d%d", &x, &y);
    ptr1 = &x;
    ptr2 = &y;
    sum = *ptr1 + *ptr2;
    printf(" sum using pointers = %d", sum);
    return 0;
}