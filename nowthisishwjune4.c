/*

HW: Extend this program as follows

1. Add following structures
a) Club having attributes (ID, name, list of players, establishment date)
b) League having following attributes (ID, name, establishment date, list of clubs)
2. Implement following functions

 a) initclub() - that initializes a club
b) initleague() - that initializes a league
c) displayclubsestablishedbefore1960(league)
d) displayallspanishplayersofleague(league)


*/


#include <stdio.h>
#include <conio.h>
#include <string.h>

struct ddate
{
    int day, month, year;
};

struct player
{
    int id,age,goals,assists;
    char name[100], nationality[100], current_club[100];

};

struct club
{
    int id, current_players_count;
    char name[50];
    struct player plist[50];
    struct ddate establishment_date;
};

struct league
{
    int id, current_clubs_count;
    char name[50];
    struct club clist[20];
    struct ddate establishment_date;
};

/*
it initializes the array of struct players take it receives as argument
Argument 1: struct player[] - list of players
Argument 2: int - total number of players to be initialized
*/

void init(struct player [], int);

/*
it displays details of players on the screen
Argument 1: struct player[] - list of players
Argument 2: int - total number of players whose details are to be displayed
*/

void display(struct player [], int);

void displaygermanplayers(struct player[],int);

void initclub(struct club);
void initleague(struct league*);
void displayleague(struct league);
void initplayer(struct player);

void displayplayer(struct player);
void displayclub(struct club);
void displayleague(struct league);

void main()
{
    struct player plist[50];
    struct league lg;
    int k;
    printf("\nEnter details of a league:\n");
    initleague(&lg);
    //printf("\nCurrent club count: %d", lg.current_clubs_count);
    displayleague(lg);
    //printf("\nHow many players do you want to register?\n"); scanf("%d", &k);
    //init(plist,k);
    //printf("\n\n\n\n");
    //displaygermanplayers(plist,k);
    getch();
}

void init(struct player plist[], int k)
{
    int i;

    for(i=0;i<k;i++)
    {
        printf("\nEnter player id: "); scanf("%d",&plist[i].id); fflush(stdin);
        printf("\nEnter player name:"); gets(plist[i].name); fflush(stdin);
        printf("\nEnter player age:"); scanf("%d",&plist[i].age); fflush(stdin);
        printf("\nEnter player nationality:"); gets(plist[i].nationality); fflush(stdin);
        printf("\nEnter player current club:"); gets(plist[i].current_club); fflush(stdin);
        printf("\nEnter player goals:"); scanf("%d",&plist[i].goals); fflush(stdin);
        printf("\nEnter player assists:"); scanf("%d",&plist[i].assists); fflush(stdin);
    }
}

void display(struct player p[], int n)
{
    int i;
    for(i=0;i<n;i++) //display info of players
    {
        printf("\n\nPLAYER %d iNFORMATION\n--------------\n",i+1);
        printf("\nPlayer name: %s\n",p[i].name);
        printf("\nPlayer age: %d\n",p[i].age);
        printf("\nPlayer nationality: %s\n",p[i].nationality);
        printf("\nPlayer current club: %s\n",p[i].current_club);
        printf("\nPlayer goals: %d\n",p[i].goals);
        printf("\nPlayer assists: %d\n",p[i].assists);
    }
}

void displaygermanplayers(struct player p[], int n)
{
    int i;
    char nat[100];
    for(i=0;i<n;i++) //display info of players
    {
        strcpy(nat, p[i].nationality);
        tolower(nat);
        if(strcmp(nat, "german")==0)
        {
            printf("\n\nPLAYER %d iNFORMATION\n--------------\n",i+1);
            printf("\nPlayer name: %s\n",p[i].name);
            printf("\nPlayer age: %d\n",p[i].age);
            printf("\nPlayer nationality: %s\n",p[i].nationality);
            printf("\nPlayer current club: %s\n",p[i].current_club);
            printf("\nPlayer goals: %d\n",p[i].goals);
            printf("\nPlayer assists: %d\n",p[i].assists);
        }
    }
}

void initclub(struct club c)
{
    int i;
    struct player p;
    char ch;
    printf("\nEnter club id: "); scanf("%d",&c.id); fflush(stdin);
    printf("\nEnter club name:"); gets(c.name); fflush(stdin);
    printf("\nEnter establishment date:"); scanf("%d-%d-%d",&c.establishment_date.day, &c.establishment_date.month, &c.establishment_date.year); fflush(stdin);
    i=0;
    while(1)
    {
        printf("\nEnter details of a player:\n----------------------\n\n");
        initplayer(p);
        c.plist[i++] = p;
        printf("\n\nDo you want to continue? [y-YES | n-NO]\n");
        scanf("%c", &ch); fflush(stdin);
        if(ch=='y')
        {
            continue;
        }
        else
        {
            break;
        }
    }
    c.current_players_count=i;
}

void initplayer(struct player p)
{
    printf("\nEnter player id: "); scanf("%d",&p.id); fflush(stdin);
    printf("\nEnter player name:"); gets(p.name); fflush(stdin);
    printf("\nEnter player age:"); scanf("%d",&p.age); fflush(stdin);
    printf("\nEnter player nationality:"); gets(p.nationality); fflush(stdin);
    printf("\nEnter player current club:"); gets(p.current_club); fflush(stdin);
    printf("\nEnter player goals:"); scanf("%d",&p.goals); fflush(stdin);
    printf("\nEnter player assists:"); scanf("%d",&p.assists); fflush(stdin);

}


void initleague(struct league * lg)
{
    int i;
    struct club clb;
    char ch;
    system("cls");
    printf("\nEnter League id: "); scanf("%d",&lg->id); fflush(stdin);
    printf("\nEnter league name:"); gets(lg->name); fflush(stdin);
    printf("\nEnter establishment date:"); scanf("%d-%d-%d",&lg->establishment_date.day, &lg->establishment_date.month, &lg->establishment_date.year); fflush(stdin);
    i=0;
    while(1)
    {
        printf("\nEnter details of a club:\n----------------------\n\n");
        initclub(clb);
        lg->clist[i++]= clb;
        printf("\n\nDo you want to continue? [y-YES | n-NO]\n");
        scanf("%c", &ch); fflush(stdin);
        if(ch=='y'){
        printf("\ni:%d\n\n", i);
        continue;
        }
        else
        {
        break;
        }
    }
    lg->current_clubs_count=i;
}


void displayplayer(struct player p)
{
    printf("\n\nPLAYER INFORMATION\n--------------\n");
    printf("\nPlayer name: %s\n",p.name);
    printf("\nPlayer age: %d\n",p.age);
    printf("\nPlayer nationality: %s\n",p.nationality);
    printf("\nPlayer current club: %s\n",p.current_club);
    printf("\nPlayer goals: %d\n",p.goals);
    printf("\nPlayer assists: %d\n",p.assists);

}

void displayclub(struct club c)
{
    int i;
    printf("\n\nCLUB INFORMATION\n--------------\n");
    printf("\nClub name: %s\n",c.name);
    printf("\nID : %d\n",c.id);
    printf("\nEstablishment Date: %d-%d-%d\n",c.establishment_date.day, c.establishment_date.month, c.establishment_date.year);
    printf("\nPlayers in the club:\n");
    for(i=0; i<c.current_players_count; i++)
    {
        displayplayer(c.plist[i]);
    }
}

void displayleague(struct league lg)
{
    int i;
    printf("\n\nLEAGUE INFORMATION\n--------------\n");
    printf("\nLeague name: %s\n",lg.name);
    printf("\nID : %d\n",lg.id);
    printf("\nEstablishment Date: %d-%d-%d\n",lg.establishment_date.day, lg.establishment_date.month, lg.establishment_date.year);
    printf("\nClubs in the league: \n");
    for(i=0; i<lg.current_clubs_count; i++)
    {
        displayclub(lg.clist[i]);
    }
}
