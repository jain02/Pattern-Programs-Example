#include<stdio.h>
int main()
{
	int i,j,k,count=1;
	for(i=4;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(k=1;k<count;k++)
		{
			printf("*");
		}
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		count=count+2;
		printf("\n");
	}
}
