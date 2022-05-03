#include <stdio.h>
#include <conio.h>
 
int main()
{
  int a, n, c, d, m[10][10], t[10][10]; 								//declaraion of m=matrix t=transpose//
 
  printf("\n------------------------------------------------");				
  printf("\n-welcome to the transpose of a matrix program-\n");
  printf("------------------------------------------------");
  printf("\n");
  printf("\n\nEnter the number of rows and columns of a matrix\n");				
  scanf("%d%d", &a, &n);														//take input from user
  printf("Enter elements of the matrix\n");
 
  for (c = 0; c < a; c++)			//printing the matrix
    for (d = 0; d < n; d++)
      scanf("%d", &m[c][d]);
 
  for (c = 0; c < a; c++)			//computing the transpose
    for (d = 0; d < n; d++)
      t[d][c] = m[c][d];
 
  printf("Transpose of the matrix:\n");
 
  for (c = 0; c < n; c++) {				//printing the transpose
    for (d = 0; d < a; d++)
      printf("%d\t", t[c][d]);
    printf("\n");
  }

  return 0;
}

