#include <stdio.h>
#include <conio.h>
#include <string.h>

void bubblesort(char[], int);

void main()
{
    char word1[20], word2[20], tmp;
    int len1, len2,i,j;
    printf("\nEnter first word:\n"); gets(word1);
    printf("\nEnter second word:\n"); gets(word2);
    len1= strlen(word1);
    len2= strlen(word2);
    //compare lengths of word1 and word2. If not equal, they cannot be anagrams
    if(len1!=len2){
    printf("\nThey are not anagrams!"); getch(); return;
}
//sort word1 using bubble sort
bubblesort(word1, len1);
//sort word2 using bubble sort
bubblesort(word2, len2);
//compare the words
if(strcmp(word1,word2) == 0)
    {
        printf("\nThey are anagrams!");
    }
    else
    {
        printf("\nThey are NOT anagrams!");
    }

getch();

}

void bubblesort(char word[], int len)
{
    int i,tmp, j; //varibles local to the function bubble sort (also known as local variables)
    for(i=0;i<len-1;i++)
    {
        for(j=0; j<len-i-1; j++)
        {
            if(word[j] > word[j+1])
            {
                tmp = word[j];
                word[j] = word[j+1];
                word[j+1] = tmp;
            }
        }
    }
}
