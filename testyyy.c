#include <stdio.h>
#include <conio.h>
void main()
{
	int i,j,sum=0,A[4][4];
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d", &A[i][j]);
		}
		for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
				if(i==j)
			{
				sum=sum+A[i][j];
			}
			printf("sum of diagonal elements is %d", sum);
		}
	}
	getch();
}
