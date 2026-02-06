#include<stdio.h>
#include<math.h>
int main()
{
	int i=1,n,x,sum=0;
	printf("Enter any number =");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+pow(x,i);
		i++;
	}
	printf("sum of series=%d",sum);
	return 0;
}
