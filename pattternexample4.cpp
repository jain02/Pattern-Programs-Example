#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("* ");
	}
	printf("\n");
	k=n-2;
	for(i=1;i<=k;i++)
	{
		printf("* ");
		for(j=1;j<=k;j++)
		{
			printf("  ");
		}
		printf("* \n");
	}
	for(i=1;i<=n;i++)
	{
		printf("* ");
	}
}
