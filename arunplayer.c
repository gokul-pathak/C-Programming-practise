#include <stdio.h>
#include <conio.h>

 


struct player
{
    int id,age,goals,assists;
    char name[100], nationality[100], current_club[100];
    
};

 

void main()
{
    struct player plist[3];
    int i;
    
    for(i=0;i<3;i++) //3 time loops to take info
    {    
            
            printf("\nEnter player id%d",i+1); 
            scanf("%d",&plist[i].id); fflush(stdin);
            printf("\nEnter player name:"); gets(plist[i].name); fflush(stdin);
            printf("\nEnter player age:"); scanf("%d",&plist[i].age); fflush(stdin);
            printf("\n enter player nationality:"); gets(plist[i].nationality); fflush(stdin);
            printf("\n enter player current club:"); gets(plist[i].current_club); fflush(stdin);
            printf("\n enter player goals:"); scanf("%d",&plist[i].goals); fflush(stdin);
            printf("\n enter player assists:"); scanf("%d",&plist[i].assists); fflush(stdin);        
                    
    }
    
    printf("\n\n\n\n");
    for(i=0;i<3;i++) //display info of players
    {
        
        printf("\n\nPLAYER %d iNFORMATION\n",i+1);
        printf("\nplayer name: %s\n",plist[i].name);
        printf("\nplayer age: %d\n",plist[i].age);
        printf("\nplayer nationality: %s\n",plist[i].nationality);
        printf("\nplayer current club: %s\n",plist[i].current_club);
        printf("\nplayer goals: %d\n",plist[i].goals);
        printf("\nplayer assists: %d\n",plist[i].assists);
    
    
        
    }
getch();    
}
