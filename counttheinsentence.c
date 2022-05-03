#include <stdio.h>
#include <conio.h>
#include <string.h>

int counttheinsentence(char[]);
int checkifthe(char[]);
void main()
{
	char sentence[100];
	int i=0, count=0;
	printf("\nEnter a sentence: "); gets(sentence);
	count = countthesentence(sentence);
	printf("\noccurance of the in sentence\"%s\":%d",sentence,count);
	getch();
	
}
int countthesentence(char sentence[])
{
	char word[20],ch,ch1;
	int count=0, k=0,i=0;
	ch=sentence[i];
	while(ch!='\0')
	{
		
		ch1=ch;
		k=0;
		while(!isspace(ch1)){
			word[k++]=ch1;
			ch1=sentence[++i];
		}
		word[k]='\0';
		printf("\n\ntttttttttttttttttt\n\n");
		printf("\n%s\n:word");
		if(checkifthe(word))
		{
			count++;
		}
		ch=sentence[i+1];
		printf("\n\nch=%");
	}

}
int checkifthe(char word[]){
	int res;
	if(strcmp(word,"the"))return 1;
	else return 0;
}

