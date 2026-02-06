#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,f=1;
	printf("Enter your number=");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			f=1;
			break;
		}
	}
	if(f==1)
	{
		printf("\n %d is prime number",n);
	}
	else
	{
		printf("\n %f is not prime number",n);
	}
	return 0;
}
