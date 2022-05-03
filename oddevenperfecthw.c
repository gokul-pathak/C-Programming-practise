#include <conio.h>
#include <stdio.h>

void main()
{
	int p[15], i,j, count_even=0, count_odd=0, count_perfect=0, sum=0;
	printf("\nEnter 15 numbers:\n");
	for(i=0; i<15; i++)
	{
		scanf("%d", &p[i]);
		if(p[i] % 2 == 0)
		{
			count_even++;
		
		}
		else
		{
			count_odd++;
		}
		j=1; sum=0;
		while(j<=p[i]/2)
		{
			if(p[i]%j == 0)
			{
				sum = sum + j;
			}
			j++;
		}
		if(sum==p[i])
		{
			count_perfect++;
		}
		printf("\n\neven: %d:\nOdds: %d:\nperfect: %d", count_even, count_odd, count_perfect);
	
	}
}
