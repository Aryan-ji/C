#include<stdio.h>
#include<conio.h>

//Program to check wheater input is int or char

void main()
{
int y;
char x;
clrscr();
printf("Enter the charcter or positive integer");
scanf("%c",&x);
if(x>=48 && x<=57)
{
	printf("this is an positive integer");
}
else{
	printf("This is character");
}
getch();
}