#include<stdio.h>
int main()
{
	int i,j,n=1,count=0,x;
	printf(" ");
	for(i=1;i<=5;i++)
	{
		for(j=5;j>i;j--)
		{
			printf("    ");
		}
		for(j=1;j<i*2;j++)
		{
			x=n*n;
			printf("%d",x);
			while(x != 0)
    		{
        		x /= 10;
         		count++;
    		}
    		if(count==1)
    		{
    			printf("    ");
			}
			else if(count==2)
			{
				printf("  ");
			}
			else
			{
				printf(" ");
			}
			n++;
			count=0;
		}
		printf("\n");
	}
}
