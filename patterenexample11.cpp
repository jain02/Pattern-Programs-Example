#include<stdio.h>
int main()
{
	int i,j,count;
	for(i=1;i<=4;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d",j%2);	
		}
			printf("\n");
	}
}
