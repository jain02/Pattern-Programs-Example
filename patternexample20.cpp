#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,x;
	float n;
	printf("Enter the Number: ");
	scanf("%f",&n);
	for(i=1;i<=ceil(n/2);i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i=floor(n/2);i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf("* ");
		}
		printf("\n");
	}
}
