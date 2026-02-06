#include<stdio.h>
int sum(int);
int main()
{
	int r=sum(5);
	printf(" Even number sum of series=%d",r);
	
	return 0;
}
int sum(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	return 2*n-1+sum(n-1);
}
