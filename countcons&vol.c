//string exercis 1:
//wap in c that takes a string as input from keyboard and counts total vowels and consonants.
/*
	input		output
	----		-----
	tiger		vowels: 2
				consonants: 3
	elephant 	vowels: 3
				consonants: 5
				
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

void main()
{
	char word[20],ch;
	int len, count_vowel=0, count_cons=0,i;
	printf("\nEnter a string:\n");
	//*scanf("%s",word);
	gets(word);
	len = strlen(word);
	for(i=0; i<len; i++)
	{
		ch = word[i];
		if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
		{
			ch=tolower(ch);
			if(ch == 'a'|| ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
			{
				count_vowel++;
			}
			else
			{
				count_cons++;
			}
		}
	}
	printf("\n\nVowel count:%d\nconsonant count: %d", count_vowel, count_cons);
	getch();
}
