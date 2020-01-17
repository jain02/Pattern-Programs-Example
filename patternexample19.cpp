#include<stdio.h>
int main()
{
	int i,j,count=4;
	for(i=0;i<5;i++)
	{
		for(j=0;j<count;j++)
		{
			printf(" ");
		}
		for(j=i;j>=0;j--)
		{
			printf("%d",j);
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
		count--;
	}
}
