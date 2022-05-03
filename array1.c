/*
 wap in c that
 -declares an array of size of 6
 -initializes if dynamically
 -computes the sum and average of all elements in the array
 */
 
#include <conio.h>
#include <stdio.h>
void main()
{
	int p[6],i,sum=0;
	printf("\nEnter 6 numbers:\n");
	for(i=0;i<6;i++)
	{
		scanf("%d, &p[i]");
		sum=sum+p[i];
	}
		printf("\nsum: %d", sum);
		printf("\nAverage: %f", (float)sum/6.0);
		getch();
		
}
