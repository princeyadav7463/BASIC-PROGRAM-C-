#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	printf("Enter the value of n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%2==0)
		{
			sum=sum-i;
		}
		else
		{
			sum=sum+i;
		}
	}
	printf("sum of series=%d",sum);
	return 0;
}
