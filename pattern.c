#include <stdio.h>
#include <conio.h>

void main()
{
	int i, k;
	for(i=1; i<=10; i++)
	{
		for(k=1;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	getch();
}
