#include <stdio.h>
int feb(int n)
{
   if (n == 1)
   {
      return 1;
   }
   else if (n == 2)
   {
      return 1;
   }
   else
   {
      return (feb(n - 1) + feb(n - 2));
   }
}

int main()
{
   int num, rec;
   printf("Enter n terms :");
   scanf("%d", &num);

   rec = feb(num);
   printf("Nth fibonacci = %d", rec);
   return 0;
}