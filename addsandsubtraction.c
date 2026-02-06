#include<stdio.h>
int main()
{
	int i,j,n,sum;
	printf("Enter any no=");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==0)
		{
			sum=sum-i;
		}
		else
		{
			sum=sum+i;
		}
		i++;
	}
	printf("Sum of series=%d",sum);
}
