#include<stdio.h>
int multi();
int main()
{
	int r=multi();
	printf("multi=%d\n",r);
	printf("multi=%d\n",multi());
	
	return 0;
}
int multi()
{ 
	int a,b,c;
	printf("Enter any number=\n");
	scanf("%d%d",&a,&b);
	c=a*b;
	return c;
}
