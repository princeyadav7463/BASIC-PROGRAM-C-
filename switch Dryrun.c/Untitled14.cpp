#include<stdio.h>
int main()
{
	int n,i,c=0;
	printf("Enter any nuber=");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c>1)
	{
		printf("\n not prime no");
	}
	else
	{
		printf("\n prime no");
	}
}
