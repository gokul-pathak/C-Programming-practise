#include <stdio.h>
#include <conio.h>
void main()
{
	int p[5][5], i, j, sum=0;
	print("enter(5*5) matrix:\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d", &p[i][j]);
			if(i+j==i)
			{
				sum+=p[i][j];
			}
		}
	}
	printf("\nsum of first column is : %d", &sum);
	getch();
}
