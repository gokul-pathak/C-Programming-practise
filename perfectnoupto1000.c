#include <stdio.h>
#include <conio.h>

void main()
{
    int number=1;

    while(number<=1000){
        int i, sum=0;

        for(i=1; i<number; i++){
            if(number%i==0){
                sum+=i;
            }
        }

        if(sum==number){
            printf("%d is perfect\n", number);
        }
        number++;
    }

    return 0;

}
