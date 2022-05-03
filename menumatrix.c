#include <conio.h>
#include <stdio.h>
void main()
{
	int choice,a, n, c, d, m[10][10], t[10][10], i, sum=0,number=1; 
	do
	{
		system("cls");
		printf("\nMathmatical problem:\n\n----------------\n\n");
		printf("\nTranspose of the matrix:\t\t1");
		printf("\nPerfect number upto 1000:\t\t2");
		printf("\nExit from the app:\t\t\t3");
		printf("\nwhich operation do you want to choose?\n");
		scanf("%d",&choice); fflush(stdin);
		switch(choice)
		{
			case 1: 
					printf("\n\nEnter the number of rows and columns of a matrix\n"); fflush(stdin);				
		  			scanf("%d%d", &a, &n);														//take input from user
		  			printf("Enter elements of the matrix\n");
		 
		  			for (c = 0; c < a; c++)			//printing the matrix
		    		for (d = 0; d < n; d++)
		      		scanf("%d", &m[c][d]);
		 
		  			for (c = 0; c < a; c++)			//computing the transpose
		    		for (d = 0; d < n; d++)
		      		t[d][c] = m[c][d];
		 
		  			printf("Transpose of the matrix:\n");
		 
		  			for (c = 0; c < n; c++) {				//printing the transpose
		    		for (d = 0; d < a; d++)
		      		printf("%d\t", t[c][d]);
		    		printf("\n");
		  			}
		
		  			 break;
		  	case 2:
			  		

				    while(number<=1000){
				        int i, sum=0;
				
				        for(i=1; i<number; i++){
				            if(number%i==0){
				                sum+=i;
				            }
				        }
				
				        if(sum==number){
				            printf("%d is perfect\n", number); fflush(stdin);
				        }
				        number++;
				    }

    					 break;
			case 3: printf("\nThanks for using application!\n"); return;
			default: printf("Invalid input(error)\n");break;  
		}
		getch();
	}while(1);
}
