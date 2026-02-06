#include<stdio.h>
void show(int);
int main()
{
	show(6);
	
	return 0;
}
void show(int n)
{
	if(n==1)
	{
		printf("%d\n",n);
	}
	else if(n%2!=0)
	{
		show(n-2);
		printf("%d\n",n);
		
	}
	else
	{
		show(n-1);
	}
}
