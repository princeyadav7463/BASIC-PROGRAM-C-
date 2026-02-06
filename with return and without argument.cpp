#include<stdio.h>
int add();
int main()
{
	int r=add();
	printf("sum=%d\n",r);
	printf("sum=%d\n",add());
	
	
	return 0;
}
int add()
{
	int a,b,c;
	printf("Enter two number=");
	scanf("%d%d",&a,&b);
	c=a+b;
	return c;
}
