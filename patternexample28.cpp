#include<stdio.h>
int main()
{
	int i,j,count=0,x,k=4,y;
	for(i=1;i<=5;i++)
	{
		x=i;
		for(j=1;j<=i;j++)
		{
			y=x+count;
			printf("%d ",y);
			x=y;
			count=k--;
		}
		count=0;
		k=4;
		printf("\n");
	}
}
