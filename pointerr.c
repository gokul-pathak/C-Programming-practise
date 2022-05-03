/*
Pointer arithmetic demonstration
*/

#include <stdio.h>
#include <conio.h>

void main()
void main()
{
int a=77, b=8;
int *p=&a, *q=&b;
printf("a= %d", *p); //a=77
printf("\nb= %d", *q); //b=8
printf("\na+b= %d", (*p + *q)); //a+b= 85
printf("\na-b= %d", *p-*q); //a-b= 69
printf("\na*b= %d", *p**q); //a*b= 616
printf("\na/b= %lf", (float) *p / *q); //9.625000 using typecasting - converting one data type to another (i.e. int to float)
printf("\n&a = %d\tp = %d\n", &a, p);
printf("\n*p+1= %d\t*p+2= %d", *p+1, *p+2); //integer addition after dereferencing a pointer
printf("\np+1= %d\tp+2= %d", p+1, p+2); //pointer addition
printf("\np-1= %d\tp-2= %d", p-1, p-2); //pointer subtraction
//printf("\np*1= %d\tp*2= %d", p * 1, p * 2); //pointer multiplication not possible
//printf("\np/1= %d\tp/2= %d", p/1, p/2); //pointer division not possible

getch();
}
