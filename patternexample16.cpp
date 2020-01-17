#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the No.: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("* ");
	}
	printf("\n");
	for(i=0;i<(n-2);i++)
	{
		if(n%2==1)
		{
			for(j=0;j<(n/2);j++)
			{	
				printf("  ");
			}
			printf("*");
			printf("\n");	
		}
		else
		{
			for(j=0;j<(n/2)-1;j++)
			{	
				printf("  ");
			}
			printf(" *");
			printf("\n");
		}
	}
	for(i=0;i<n;i++)
	{
		printf("* ");
	}
}
