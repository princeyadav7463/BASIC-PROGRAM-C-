#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,f=1;
	printf("Enter any number=");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			f=0;
			break;
		}
	}
	if(f==1)
	{
		printf("%d is prime number\n",n);
	}
	else
	{
		printf("%d is not prime number\n",n);
	}
	return 0;
}
