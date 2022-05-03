#include <stdio.h>
#include <conio.h>
void main()
{
	int p[4][4], i,j, sum=0;
	printf("\nenter a (4*4) matrix:\n");
	scanf("\n%d,%d", &p[i][j]);
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d", &p[i][j]);
			if((i+j)==(4-1)){
				sum+=p[i][j];
			}
		}
	}
	printf("\nSum of right diagonal: %d", sum);
	getch();
}
