#include <stdio.h>
#include <string.h>

int main()
{
    // declaration
    char name[] = "swati";
    char course[] = {'p', 'r', 'o', 'g', 'r', 'm', 'i', 'n', 'g', '\0'};

    // printing a string
    for (int i = 0; name[i] != '\0'; i++)
    {
        printf("%c", name[i]);
    }
    printf("\n");

    // printing string with pointer
    for (char *ptr = name; *ptr != '\0'; ptr++)
    {
        printf("%c", *ptr);
    }
    printf("\n");

    // printing using format specifier
    printf("%s\n", name);

    // input a string
    char firstName[40];
    printf("Enter the first name : ");
    scanf("%s", firstName);
    printf("your first name is %s\n", firstName);
    char fullName[40];
    printf("Enter full name : ");
    scanf("%s", firstName);
    printf("your full name is : ");

    // gets & puts
    printf("enter the full name :");
    fgets(fullName, 40, stdin);
    puts(fullName);

    // Library Functions
    int length = strlen(name);
    printf("the length of name : %d\n", length);

    char oldVal[] = "oldValue";
    char newVal[50];
    strcpy(newVal, oldVal);
    puts(newVal);

    char firstStr[50] = "hello";
    char secStr[] = "world";
    strcat(firstStr, secStr);
    puts(firstStr);

    char str1[] = "apple";
    char str2[] = "Banana";
    printf("%d\n", strcmp(str1, str2));

    // enter string using %c
    printf("Enter string : ");
    char str[100];
    char ch;
    int i = 0;

    while (ch != '\n')
    {
        scanf("%c", ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    puts(str);
    return 0;
}