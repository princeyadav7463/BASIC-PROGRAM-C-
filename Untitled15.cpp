/*(1/2+2/3+3/4+..............n/n */)

#include<stdio.h>
#include<math.h>
int main()
{
	float i=1,n,sum=0;
	printf("Enter any number=");
	scanf("%f",&n);
	while(i<=n)
	{
		sum=sum+(i/(i+1));
		i++;
	}
	printf("sum of series %f",sum);
}
