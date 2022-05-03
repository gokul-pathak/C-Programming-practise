/* WAP in C that takes 2 input from users and test anagrams.

Note: Two Input will be anagrams if they include same words(order may be different)

Eg:
1. But  Tub
2. stem mest
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char word1[20], word2[20], tmp;
	int i, j, len1, len2, a, b;
	printf("\nEnter first string: "); gets(word1);
	printf("\nEnter second string: "); gets(word2);
	len1 = strlen(word1);
	len2 = strlen(word2);
	
	if(len1!=len2)
	{
		printf("\nThey are not anagrams."); getch(); return;
	}
	
	for(i=0; i<len1-1; i++)
	{
		for(j=0; j<len1-i-1; j++)
		{
			if(word1[j] > word1[j+1])
			{
				tmp = word1[j];
				word1[j] = word1[j+1];
				word1[j+1] = tmp;
			}
		}
	
	}
	
	for(i=0; i<len2-1; i++)
	{
		for(j=0; j<len2-i-1; j++)
		{
			if(word2[j] > word2[j+1])
			{
				tmp = word2[j];
				word2[j] = word2[j+1];
				word2[j+1] = tmp;
			}
		}
	}
	if(strcmp(word1,word2) == 0)
	{
		printf("\nThey are anagrams");
	}
	else
	{
		printf("\nThey are not anagrams.");
	}
	getch();
}
