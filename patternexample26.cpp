#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,k,count=1;
	float n;
	printf("Enter the number: ");
	scanf("%f",&n);
	int count1=n-2;
	for(i=1;i<=ceil(n/2);i++)
	{
		for(j=i;j<=floor(n/2);j++)
		{
			printf(" ");
		}
		for(k=1;k<=count;k++)
		{
			printf("%d",k);
		}
		printf("\n");
		count=count+2;
	}
	for(i=1;i<=floor(n/2);i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=count1;k++)
		{
			printf("%d",k);
		}
		printf("\n");
		count1=count1-2;	
	}
}
