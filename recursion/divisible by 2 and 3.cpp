#include<stdio.h>
void show(int);
int main()
{
	show(12);
	
	return 0;
}
void show(int n)
{
	if(n==2)
	{
		printf("%d\n",n);
	}
	else if(n%2==0&&n%3==0)
	{
		show(n-1);
		printf("%d\n",n);
	}
	else
	{
		show(n-1);
	}
}
