#include<stdio.h>
int main()
{
	int i,j,k,count=1;
	for(i=5;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			printf("*");
		}
		printf("\n");
		for(k=0;k<count;k++)
			printf(" ");
		count++;
	}
}
