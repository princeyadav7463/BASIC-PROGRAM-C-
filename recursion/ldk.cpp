/* 1/2+2/3+3/4+4/5............n/n+1        */



#include<stdio.h>
#include<math.h>
float sum(int);
int main()
{
	float r=sum(3);
	printf("sum of series =%f",r);
	
	return 0;
}
float sum(int n)
{
	if(n==1)
	{
		return 1.0/2;
	}
	else
	{
		return (float)n/(n+1)+sum(n-1);
	}
}
