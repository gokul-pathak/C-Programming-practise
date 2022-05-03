// wap in c that counts total occurence of the character 'e' in a sentecne 
/*
	INPUT							OUTPUT
	-----							------
	a long long journey				a: 1
									l: 2
									o:3
									n:3
									g: 2
									j:1
									u:1
									r:1
									e:1
									y:1
*/
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
	struct detail
	{
		int occ;
		char c;
	};
	struct detail a[26];
	char string[100], c;
	int i=0, g;
	for(i=0;i<26;i++)
	{
		a[i].c = i+'a';
		a[i].occ=0;
	}
	printf("enter string: ");
	i=0;
	do
	{
		
		c=getchar();
		string[i++]=c;
		if(c=='\n')
		{
			break;
		}
		c=tolower(c);
		g=c-'a';
		a[g].occ++;
	}while(1);
	string[i-1]='\0';
	printf("The string entered is: %s\n", string);
	
	printf("*******************************\nCharacter\tOccurrance\n****************************\n");
	for(i=0;i<26;i++)
	{
		if(a[i].occ)
		{
			printf("     %c\t\t    %d\n",a[i].c,a[i].occ);
		}
	}
	getch();
}
