#include<stdio.h>
int sub();
int main()
{
	int r=sub();
	printf("sub=%d\n",r);
	printf("sub=%d\n",sub());
	
	return 0;
}
int sub()
{
	int a,b,c;
	printf("Enter any number=\n");
	scanf("%d%d",&a,&b);
	c=a-b;
	return c;
}
