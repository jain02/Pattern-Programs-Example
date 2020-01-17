#include<stdio.h>
int main()
{
	int i,j,count=1;
	for(i=0;i<4;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d",count);
			count++;
		}
		count--;
		printf("\n");
	}
}
