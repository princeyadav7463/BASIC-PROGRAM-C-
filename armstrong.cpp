#include<stdio.h>
#include<math.h>
int main()
{
	int n,m,r,s=0;
	printf("Enter your number=");
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		r=n%10;
		s=s+pow(r,3);
		n=n/10;
	}
	if(m==s)
	{
		printf("\n %d is armstrong number",m);
	}
	else
	{
		printf("\n %d is not armstrong number",m);
	}
	return 0;
}
