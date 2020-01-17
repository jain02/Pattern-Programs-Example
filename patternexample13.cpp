#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<(i*2);j++)
		{
			if(j%2==1)
			{
				printf("%d",i);//for odd series replace i with j and for even series replace i with j+1
			}
			else
			{
				printf("*");		
			}
		}
		printf("\n");
	}
	for(i=4;i>=1;i--)
	{
		for(j=1;j<(i*2);j++)
		{
			if(j%2==1)
			{
				printf("%d",i);//for odd series replace i with j and for even series replace i with j+1
			}
			else
			{
				printf("*");		
			}
		}
		printf("\n");
	}
}
