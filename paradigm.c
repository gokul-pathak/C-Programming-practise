#include <stdio.h>
int main() {
   int rows, n = 1, space, i, j;
   printf("Enter the number of rows that u want to see in pascale trangle.: ");
   scanf("%d", &rows);
   for (i = 0; i < rows; i++) {
      for (space = 1; space <= rows - i; space++)
         printf("  ");
      for (j = 0; j <= i; j++) {
         if (j == 0 || i == 0)
            n = 1;
         else
            n = n * (i - j + 1) / j;
         printf("%4d", n);
      }
      printf("\n");
   }
   return 0;
}
