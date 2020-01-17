#include<stdio.h>
int main()
{
	int i,j,count;
	for(i=1;i<=4;i++)
	{
		count=i;
		for(j=i;j>0;j--)
		{
			printf("1%d ",count);
			count++;
		}
		printf("\n");
	}
}
