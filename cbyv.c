#include <stdio.h>
void swap(int x, int y)
{
    int temp = x;
    x = y;
    temp = y;
    printf("a = %d, b = %d\n", x, y);
}

int main()
{
    int a = 10, b = 20;
    swap(a, b);
    printf("a = %d\n, b = %d\n", a , b);
    return 0;
}