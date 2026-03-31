#include <stdio.h>
void main()
{

    int age = 22;
    int *ptr = &age;

    int _age = 25;
    int *_ptr = &_age;

    printf("%u\n", ptr);
    ptr++;
    printf("%u\n", ptr);
    ptr--;
    printf("%u\n", ptr);

    ptr = &_age;
    printf("%d\n", ptr == _ptr);
}