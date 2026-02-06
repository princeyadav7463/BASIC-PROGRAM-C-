/* (a+1)+(a+2)+........(a+n)*/

#include<stdio.h>
int sum(int , int);
int main()
{
	int r=sum(5,6);
	printf("Sum of series=%d",r);
	
	return 0;
}
int sum(int a, int n)
{
	if(n==1)
	{
		return 1;
	}
	else
    {
		return (a+n)+sum(a, n-1);	
	}
}
