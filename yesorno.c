#include <conio.h>
#include <stdio.h>
void main()
{
   int n, i, j, ncr;

   n = 5;

   for(i = 0; i <= n; i++)
	{
      for(j = 0; j <= n-i; j++)
         printf("  ");
         
      for(j = 0; j <= i; j++)
         printf(" %3d", ncr(i, j));

      printf("\n");
    }
getch();
}
