#include<stdio.h>
int main()
{
	int r,c;
	for(r=1;r<=4;r++)
	{
		for(c=1;c<=r;c++)
		{
		if(c%2!=0)
		{
			printf("1 ");
		}
		else
		{
			printf("0 ");
		}
		}
		printf("\n");
	}
}

