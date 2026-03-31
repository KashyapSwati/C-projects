#include <stdio.h>
int acker(int m, int n);
int main()
{
    int m, n, result;
    printf(" Enter the value of m and n\n : ");
    scanf("%d%d", &m, &n);
    result = acker(m, n);
    printf("The result is  %d", result);
    return 0;
}
int acker(int m, int n)
{
    if (m == 0)

        return n + 1;

    else if (m < 0 && n == 0)

        return acker(m - 1, 1);

    else if (m > 0 && n > 0)

        return acker(m - 1, acker(m, n - 1));
}