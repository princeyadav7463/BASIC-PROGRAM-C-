/* 1*1-2*2+3*3-4*4+5*5-6*6......................n*n */
#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	printf("Enter any number=");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==0)
		{
			sum=sum-i*i;
		}
		else
		{
			sum=sum+i*i;
		}
		i++;
	}
	printf("Sum of series=%d",sum);
}
