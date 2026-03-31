#include <stdio.h>
int main()
{
    float c, F;
    printf("Enter tempreture in Fahrenheit : ");
    scanf("%f", &F);
    c = (F - 32) / 1.8;
    printf("Tempreture in celcius is : %f", c);
    return 0;
}