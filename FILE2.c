#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
 int main()
 { 
    FILE*fptr;
    char data [50] = "file handling program writting in a file";
//creating file usng fopen()
//with acccess mode "w"
 fptr = fopen("file2.txt","w");

 //cheaking the file is created
  if (fptr == NULL)
     printf("the file is not opened.");
 else
 {
     printf("the file is now opened.\n");
     fputs(data, fptr);
     fputs("\n",fptr);
     
     //closing the file using fclose()
     fclose(fptr);
     printf("Data successfully written in file" "file2.txt\n");
     printf("file is now closed.");
 }
getch();     
return 0;    
 }