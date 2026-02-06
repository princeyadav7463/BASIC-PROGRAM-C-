#include<stdio.h>
int main()
{
	int n,sum=0,rem,m;
	printf("Enter your choice=");
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		rem=n%10;
		sum =10*sum+rem;
		n=n/10;
	}
	printf("\n reverse of %d=%d",m,sum);
	return 0;
}
