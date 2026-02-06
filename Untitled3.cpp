#include<stdio.h>
int main()
{
	int i=1,sum=0;
	while(i<=10)
	{
		if(i%2!=0)
		{
			sum=sum+i;
		}
		i++;
	}
	printf("sum of series odd number=%d",sum);
	return 0;
}
