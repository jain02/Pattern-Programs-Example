#include<stdio.h>
int main()
{
	int i,j,k=5;
	for(i=1;i<=5;i++)
	{
		for(j=i;j<k;j++)
		{
			printf("  ");
		}
		for(j=i;j>=1;j--)
		{
			printf("%d   ",j);
		}
		printf("\n");
	}
	for(i=4;i>=1;i--)
	{
			for(j=k;j>i;j--)
		{
			printf("  ");
		}
		for(j=i;j>=1;j--)
		{
			printf("%d   ",j);
		}
		printf("\n");
	}
}
