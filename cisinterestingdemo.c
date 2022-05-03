#include<stdio.h>
#include<conio.h>

void main()
{
	char opt;
	do
	{
	
		printf("C is interesting!\n");
		printf("\nDo you want to continue? (y/n)");
		scanf("%c", &opt); fflush(stdin);
		printf("\n");
		if (opt == 'y'|| opt=='Y')
		{
			printf("\n");
		}
		else if (opt == 'n'|| opt=='N')
		{
			printf("Bye Bye!");
			return 0;
		}
		else
		{
			printf("Invalid selection\n\n\n");
		}
	}while(1);
	
	getch();
}

