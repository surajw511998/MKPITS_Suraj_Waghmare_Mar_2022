#include<stdio.h>
int main()
{
	int n,num,bak,add=0;
	printf("enter any number\n");
	scanf("%d",&num);
	bak=num;
	do
	{
	n=num%10;
	add=add+n;
	num=num/10;
	}while(num>0);
	printf("addition of %d = %d",bak,add);
}

