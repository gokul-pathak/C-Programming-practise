#include <conio.h>
#include <stdio.h>
void main()
{
    char option='Y';
    do
    {
    	printf("C programming is interesting!\n");
    	printf("\nDo you want to continue?[Y: Yes | N: No]!\n");
    	scanf("%c", & option);
    	fflush(stdin);
    	switch(option)
    	{
    		case 'y' : continue;
    		case 'n' : printf("\nBye Bye"); getch(); return;
    		default : printf("\nInvalid input. Enter [Y or N]!\n\n"); getch();
		}
    	
	}while(1);
}

