#include <conio.h>
#include <stdio.h>

void main()
 
{
  int i,j,A[50][50],sum=0,n;

  printf("---------------------------------------\n");
  printf("--------Welcome to matrix program-------\n");
  printf("---------------------------------------\n");
  printf("\n\nTo find sum of right diagonals of a square matrix is :\n");
  printf("---------------------------------------\n");	 

  printf("Input the size : ");
  scanf("%d", &n); 
  printf("Input elements in the first matrix :\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
    printf("element - [%d],[%d] : ",i,j);
    scanf("%d",&A[i][j]);
    if (i==j) sum= sum+A[i][j];
    }
  }  


  printf("The matrix is :\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n ;j++)
    printf("% 4d",A[i][j]);
    printf("\n");
  }

  printf("Addition of the right Diagonal elements is :%d\n",sum); getch();
}

