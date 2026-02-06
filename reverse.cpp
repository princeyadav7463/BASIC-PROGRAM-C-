#include<stdio.h>
int main()
{
	int i, rem,sum=0,n,m;
	printf("Enter the value of no=");
	scanf("%d",&n);
	m=n;0
	while(n!=0)
	{
		rem=n%10;
		sum=10*sum+rem;
		n=n/10;
	}
	printf("\n Revese of %d=%d",m,sum);
	return 0;
}
