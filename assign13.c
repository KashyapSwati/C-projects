#include <stdio.h>
int main()
{
    FILE *fp1, *fp2;
    int c1, c2;

    fp1 = fopen("file1.txt", "r");
    fp2 = fopen("file2.txt", "r");

    if (fp1 == NULL || fp2 == NULL)
    {
        printf("cannot open file.\n");
    }
    while (1)
    {
        c1 = fgetc(fp1);
        c2 = fgetc(fp2);

        if (c1 != c2)
        {
            printf("File are not same\n");
            break;
        }
        if (c1 == EOF && c2 == EOF)
        {
            printf("File are same \n");
            break;
        }
    }
    fclose(fp1);
    fclose(fp2);

    return 0;
}