#include<stdio.h>
#include<conio.h>
void main()
{
	
clrscr();
int num,n1,n2,n3,sum;
printf("enter three digit number");
scanf("%d",&num);
n1=num%10;
num=num/10;
n2=num%10;
num=num/10;
n3=num%10;
num=num/10;
sum=n1+n2+n3;
printf("addition of digit=%d",sum);
getch();	
}