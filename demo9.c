#include <stdio.h>
#include <conio.h>

void main()
{
	int a;
	
	for(a=1;	a<11;	a++)
	{
		if(a==7) break;
		printf("%d", &a);
	}
	printf("\nbye");
	getch();
}
