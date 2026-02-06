#include<stdio.h>
int sum(int);
int main()
{
	int r=sum(3);
	printf(" Even number sum of series=%d",r);
	
	return 0;
}
int sum(int n)
{
	if(n==1)
	{
		return 2;
	}
	else
	return 2*n+sum(n-1);
}
