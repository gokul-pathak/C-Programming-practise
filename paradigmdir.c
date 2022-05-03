/* WAP to display following pattern
			*
		   * *
		  * * *
		 * * * *
		* * * * *
*/
#include <conio.h>
#include <stdio.h>
void main()
{
	int rows, i, j, k;
	printf("\n Enter the number of rows:"); scanf("%d", &rows);
	for(i=0;i<rows; i++)
	{
		for(j=0;j<rows-(i+1); j++)
		{
			printf(" ");
		}
		for(k=0; k<=i; k++)
		{
			printf("* ");
		}
		
		printf("\n");
	}
}
