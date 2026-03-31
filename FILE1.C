#include <stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
    //file pointer 
    FILE* fptr;
    //creating file using fopen()
    //with access mode "w"
    fptr = fopen("file1.txt","w");
    
    //cheaking if the file is created 
    if (fptr == NULL)
       printf("the file is not opened.");
    else
       printf("the file is created successfully.");
       getch();
       return 0;
}