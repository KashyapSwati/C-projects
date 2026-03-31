#include <stdio.h>
#include <conio.h>   
int main()
{
      FILE*fp;
      char ch;
      fp = fopen("file2.txt","r");
       
      if(fp == NULL)
      {
        printf("filr not found!\n");
        return 1;
      }
while ((ch = fgetc(fp)) != EOF)
{
    printf("%c",ch);
}
fclose(fp);
getch();
return 0;


}
   


