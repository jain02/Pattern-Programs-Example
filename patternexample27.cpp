#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=10;i++)
	{
		k=i;
		for(j=1;j<=i;j++)
		{
			printf("%d ",k);
			k=k+i;
		}
		printf("\n");
	}
}
