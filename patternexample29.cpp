#include<stdio.h>
int main()
{
	int i,k=11,x;
	long long result=1;
	printf("1\n");
	for(i=1;i<=4;i++)
	{
		x=i;
		while (x!= 0)
    	{
        	result*=k;
        	--x;
   		}
   		printf("%lld",result);
		result=1;
		printf("\n");
	}
}
