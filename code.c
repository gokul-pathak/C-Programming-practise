#include <stdio.h>
#include <conio.h>
void main()
{
	int day;
	printf("\nEnter Day: \n");
	scanf("%d", &day);
	switch(day)
	{
		case 1: printf("\nSunday!\n"); break;
		case 2: printf("\nMonday!\n"); break;
		case 3: printf("\nTuesday!\n"); break;
		case 4: printf("\nWednesday!\n"); break;
		case 5: printf("\nThursday!\n"); break;
		case 6: printf("\nFriday!\n"); break;
		case 7: printf("\nSaturday!\n"); break;
		default: printf("\nInvalid Day!\n");
	}
	
	printf("\nBye!\n");
	getch();
}


