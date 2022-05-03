/*



There are 2 players A and B who are interested in playing a game of numbers.
In each move a player picks two distinct numbers, let's say a1 and a2 and them replaces all a2 by a1 or a1 by a2
They stop playing the game if any one of them is unable to pick 2 numbers and the player who is unable to pick 2 distinct numbers
in an array looses the game.
First player always moves first and then the second.



TASK is to find which player wins



INPUT: arr[] = {1,3,3,2,2,1}
Output: Player 2 wins



Explanation
-----------
Suppose first player picks (1,3) = > replace all 3 by 1
Now array becomes: {1,1,1,2,2,1}
Then second player picks (1,2) => either replace 1 by 2 or 2 by 1



Now array becomes: {1,1,1,1,1,1}



Now first player cannot choose. So he looses




INPUT: arr[] = {2,5,1,2,3,4}



Player A chooses distinct pair (2,5) => replace 5 by 2
Now array becomes: {2,2,1,2,3,4}



Player B chooses distinct pair (2,1) => replace 1 by 2
Now array becomes: {2,2,2,2,3,4}



Player A chooses distinct pair (2,3) => replace 3 by 2
Now array becomes: {2,2,2,2,2,4}



Player B chooses distinct pair (2,4) => replace 4 by 2
Now array becomes: {2,2,2,2,2,2}




Player A does not find a distinct pair. So player A looses



*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int p[6] = {2,5,1,2,3,4};
    int i=0, a1, a2, flag=1, iter=0;
    while(1)
    {
        //check if the array contains 2 distinct elements . If yes pick a pair and do the replacement , other wise the player looses
        for(i=1; i<6; i++)
        {
            if(p[0]!=p[i])
            {
                flag=0;
                break;
            }
        }
        a1=p[0]; a2=p[i];
        if(flag==0)
        {
            for(i=0; i<6; i++)
            {
                if(p[i] == a2)
                {
                    p[i] = a1;
                }
            }
            iter++;
            flag=1;
            continue;
        }
        else
        {
            if(iter%2 == 0)
            {
                printf("\n\nPlayer A lost!");
            }
            else
            {
                printf("\n\nPlayer B lost!");
            }
        }
        break;
    }
    getch();
}
