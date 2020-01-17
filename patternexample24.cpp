#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("1");
	}
	printf("\n");
	k=n-2;
	for(i=1;i<=k;i++)
	{
		printf("1");
		for(j=1;j<=k;j++)
		{
			printf(" ");
		}
		printf("1\n");
	}
	for(i=1;i<=n;i++)
	{
		printf("1");
	}
}
