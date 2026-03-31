#include <stdio.h>
int main()
{
    int a = 10;
    a += 10;
    printf("a+10 = %d/n", a);

    a -= 10;
    printf("a-10 = %d/n", a);

    a *= 10;
    printf("a*10 = %d/n", a);

    a /= 10;
    printf("a/10 = %d/n", a);

    a %= 10;
    printf("a%c10 = %d/n", '%', a);

    printf("%d/n", !(3 < 4 && 3 < 5));
    printf("%d/n", !(4 < 3 && 5 < 3));

    return 0;
}