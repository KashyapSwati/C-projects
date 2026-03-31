#include <stdio.h>
int factorial(int n);

int main()
{
    int n;
    printf("enter n : ");
    scanf("%d", &n);
    printf("factorial is : %d", factorial(n));
    return 0;
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    int fact_n1 = factorial(n - 1);
    int fact_n = fact_n1 * n;
    return fact_n;
}
