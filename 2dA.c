#include <stdio.h>
int main()
{
    int base_address = 1000;
    int i = 20, j = 5;
    int num_columns = 25;
    int size_of_element = 4;
    int address = base_address + (i * num_columns + j) * size_of_element;

    printf("address of arr[%d][%d] = %d\n", i, j, address);
    return 0;
}