#include <stdio.h>
#include <conio.h>
void main()
{
    int choice, num, k, flag;
    do
    {
        system("cls");
        printf("\nMaths Application:\n----------------\n\n");
        printf("\nCheck Prime:\t\t1");
        printf("\nCheck Odd/Even:\t\t2");
        printf("\nExit:\t\t3");
        printf("\nWhich option do you want to choose?\n");
        scanf("%d", &choice); fflush(stdin);
        switch(choice)
        {
            case 1: flag=1;
            printf("\nEnter a number:"); scanf("%d", &num); fflush(stdin);
            for(k=2;k<=num/2; k++)
            {
                if(num%k==0)
                {
                    flag=0;
                }
            }
            if(flag==0)
            {
                printf("\n%d is not prime", num);
            }
            else
            {
                printf("\n%d is prime", num);
            }
            break;
            case 2: printf("\nEnter a number:"); scanf("%d", &num); fflush(stdin);
            if(num%2==0)
            {
                printf("\n%d is even!\n", num);
            }
            else
            {
                printf("\n%d is odd!\n", num);
            }
            break;
            case 3: printf("\nThanks for using application!\n"); return;
            default: printf("Invalid input(error)\n");
        }
        getch();
    }while(1);
}
