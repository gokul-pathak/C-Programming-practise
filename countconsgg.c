// wap in c that counts total occurence of the character 'e' in a sentecne 
/*
	INPUT							OUTPUT
	-----							------
	a long long journey				occurance of e: 1
	the pot in the middle of earth 	occurance of e: 4
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
	char sentence[100];
	int i=0, count_e=0;
	printf("\nEnter a sentence: "); gets(sentence);
	while(sentence[i] != '\0')
	{
		if('E' == toupper(sentence[i]))
		{
			count_e++;
		}
		i++;
	}
	printf("\nOccurence of e: %d", count_e);
	getch();
	
}
