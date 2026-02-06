#include<stdio.h>
int main()
{
	int factorial(int);
	int f,n;
	printf("\n Enter any integer number=");
	scanf("%d",n);
	if(n<0)
	{
		printf("\n factorial of negative number not possible");
	}
	else if(n==0)
	{
		printf("\n factorial of o is 1");
	}
	else 
	{
		f=factorial(n);
		printf("\n factorial of %d=%d",n,f);
	}
	return 0;
}
int factorial(int m)
{
	int f=1;
	if(m>=1)
	{
		f=m*factorial(m-1);
	}
	return (f);
}
