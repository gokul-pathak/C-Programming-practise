//WAP in C that computes if 3 points lie on the same vertical or horizontal line or not.


#include <stdio.h>
#include <conio.h>

struct point
{
    int x,y;
};

void main()
{
    struct point p1, p2, p3;
    int i;
    for(i=0;i<3;i++)
    {
        printf("\nEnter point%d: (x%d, y%d): ", i+1, i+1, i+1);
        switch(i)
        {
            case 0: scanf("%d,%d", &p1.x, &p1.y); break;
            case 1: scanf("%d,%d", &p2.x, &p2.y); break;
            case 2: scanf("%d,%d", &p3.x, &p3.y); break;
        }
        fflush(stdin);
    }

    if(((p1.x == p2.x) && (p1.y == p2.y)) && ((p2.x == p3.x) && (p2.y == p3.y)))
    {
        printf("\nThey are same points. So they lie in the same line!");
    }
    else
    {
        if((p1.y==p2.y) && (p2.y==p3.y))
        {
            printf("\nThey (all 3 points) lie in the same horizontal line!");
        }
        else if((p1.x==p2.x) && (p2.x==p3.x))
        {
            printf("\nThey (all 3 points) lie in the same vertical line!");
        }
        else
        {
            printf("\nThey (all 3 points) don't lie on the same line!");
        }
    }
    getch();
}
