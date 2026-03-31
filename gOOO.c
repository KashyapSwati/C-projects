#include <stdio.h>
int main()
{
    int n;

    printf(" Enter n number :");
    scanf("%d", &n);
    if (n <= 10)
        goto end;
    printf("Number is %d", n);
    end:
    printf("Bye Bye");
    return 0;
}