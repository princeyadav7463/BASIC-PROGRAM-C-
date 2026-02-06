#include<stdio.h>
void show(int n);
int main()
{
	show(10);
	
	return 0;
}
void show(int n)
{
	if(n==1)
	{
		printf("%d\n",n);
	}
	else
	{
		show(n-1);
		printf("%d\n",n);
	}
}
