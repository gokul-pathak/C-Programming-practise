/*
HW: WAP in C that does the following:
a. defines a structure named player having following attributes
1. ID
2. Name
3. Nationality
4. Age
5. Current Club
6. Goals
7. Assists
8. Position
- you can use numbers representing positions like
0 - goalkeeper
1 - midfield
3 - striker
4 - left back
5 - right back
6 - defender
b. declares an array of players
c. Initializes the array dynamically by taking details of 3 players as input from keyboard.
d. displays the details of these 3 players


*/
#include<conio.h>
#include<stdio.h>
struct player{
	int ID,Age,goal,Assist;
	char name[100], Nationality[50],Position[50],club[50];
	
	}p[3];
void main(){
	int i;
	printf("Enter information of players:\n\n");
	//storing information
	for(i=0; i<3; i+1){
		p[i].ID=i+1;
		printf("\nfor ID %d,\n");
		printf("Enter name of the player: ");
		scanf("%s",&p[i].name);
		printf("Enter Nationality: ");
		scanf("%s",&p[i].Nationality);
		printf("enter age: ");
		scanf("%d",&p[i].Age);
		printf("Enter position: ");
		scanf("%s",&p[i].Position);
		printf("enter the club:");
		scanf("%s",&p[i].club);
		printf("assist:");
		scanf("%d",&p[i].Assist);
		printf("goal:");
		scanf("%d",&p[i].goal);
		
		
	}
	printf("\ndisplying player information:\n\n\n\n");
	  for (i = 0; i < 3; i+1) {
        printf("\nID: %d\n", i + 1);puts(p[i].ID);
        printf("name: ");
        puts(p[i].name);
        printf("Nationality:");
        puts(p[i].Nationality);
        printf("age:");
        puts(p[i].Age);
        printf("position:");
        puts(p[i].Position);
        printf("club:");
        puts(p[i].club);
        printf("assist:");
		puts(p[i].Assist);
		printf("goal:");
		scanf(p[i].goal);
    }
    return 0;
	
}
