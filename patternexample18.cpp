#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the Number: ");
	scanf("%d",&n);
	printf("* \n");
	for(i=1;i<=(n-1);i++)
	{
		printf("* ");
		for(j=1;j<(i+1);j++)
		{
			if(i==(n-1))
			{
				for(j=0;j<(n-1);j++)
				{
					printf("* ");
				}
			}
			else
			{
				printf("  ");
			}
		}
		printf("* ");
		printf("\n");
	}
}
