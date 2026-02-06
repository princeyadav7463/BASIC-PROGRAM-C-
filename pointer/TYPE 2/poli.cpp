#include<stdio.h>
int main()
{
	int n,sum=0,rem,m;
	printf("Enter your number=\n");
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		rem=n%10;
		sum=10*sum+rem;
		n=n/10;

	}
	if(n==sum)
	{
		printf("\n %d is palidrome",m);
	}
	else
	{
		printf("\n %d is not palidrome",m);
	}
}
