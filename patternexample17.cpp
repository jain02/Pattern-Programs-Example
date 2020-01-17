#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,k,count=1;
	float n;
	printf("Enter the Number: ");
	scanf("%f",&n);
	for(i=1;i<ceil(n/2);i++)
	{
		printf(" ");
	}
	printf("*\n");
	for(i=1;i<=floor(n/2);i++)
	{
		for(k=i;k<floor(n/2);k++)
		{
			printf(" ");
		}
		printf("*");
		for(j=0;j<count;j++)
		{
			printf(" ");	
		}
		printf("*\n");
		count=count+2;
	}
	count=1;
	for(i=5;i<n;i++)
	{
		count++;
	}
	for(i=1;i<floor(n/2);i++)
	{
		for(k=0;k<i;k++)
		{
			printf(" ");
		}
		printf("*");
		for(j=count;j>0;j--)
		{
			printf(" ");	
		}
		printf("*\n");
		count=count-2;
	}
	for(i=1;i<ceil(n/2);i++)
	{
		printf(" ");
	}	
	printf("*");
}
