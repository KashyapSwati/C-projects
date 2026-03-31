#include <stdio.h>
int main()
{
    int n1, n2, i, sum;

    printf(" enter the value of n1 and n2 : ");
    scanf("%d%d", &n1, &n2);

    for (i = n1; i <= n2; i++)
    {
        if (n1 % 5 == 0)
            

        {
            printf(" the no. %d is divisible by 5\n", n1);
        }

        sum = sum + n1;

        printf(" the sum is %d :", sum);
    }
    return 0;
}