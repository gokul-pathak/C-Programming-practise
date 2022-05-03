/* WAP in c that take 2 words as input and check if they
are anagrams or not*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
	char word1[20], word2[20];
	int a,b,c,i,j, yes=0, no=0;
	printf("enter first word: ");
	gets(word1);
	printf("enter second word: ");
	gets(word2);
	b=strlen(word1);
	c=strlen(word2);
	if(b==c)
	{
		a=b;
		for(i=0;i<a; i++)
		{
			yes=0;
			for(j=0;j<a; j++)
			{
				if(word1[i]==word2[j])
				{
					yes=1;
					break;
				}
			}
			if(yes==0)
			{
				no=1;
				break;
			}
		}
		if(no==1)
		prinf("\nWords are not anagram");
		else
		prinf("\nWords are anagram");
	}
	else
		printf("\nBoth word must contain same number of characters to be an anagram words");getch();
		
}
