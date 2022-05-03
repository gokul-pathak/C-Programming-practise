#include <stdio.h>
#include <conio.h>
#include <time.h>
void main(){
    int id, start=0, end=50,num;
    srand(time(NULL));
    num=(rand()%(end-start+1))+start;
    printf("%d");
}
