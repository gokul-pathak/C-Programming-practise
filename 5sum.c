/* 
	Experiments:
	-----------
	1) WAP in c that find the sum of digits of a 5 digit number.
		INPUT		OUTPUT
		----		-----
		12347		1+2+3+4+7= 17
		58026		5+8+0+2+6= 21
		
		int sum = 0
		
		12347 % 10 = 7
		12347 / 10 = 1234
		sum=sum+7;
		
		1234 % 10 = 4
		1234 / 10 = 123
		sum=sum+4;
		
		123 % 10 = 3
		123 / 10 = 12
		sum=sum+3;
		
		12 % 10 = 2
		12 / 10 = 1
		sum=sum+2;
		
		1 % 10 = 1
		1 / 10 = 0
		sum=sum+1;
		
		
	*/
	
#include <conio.h>
#include <stdio.h>
void main()

{
	int n, last_num, sum=0,temp;
	printf("Enter five digits number");
	scanf("%d",&n);
	temp = n;
	while(temp > 0)
	{
		last_num = temp %10;
		sum = sum + last_num;
		temp = temp/10;

	}
	printf("%d",sum);
	getch();
	
}
	
