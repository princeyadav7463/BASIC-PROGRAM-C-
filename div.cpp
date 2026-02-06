#include<stdio.h>
int div();
int main()
{
	int r=div();
	printf("div=%d\n",r);
	printf("div=%d\n",div());
	
	return 0;
}
int div()
{
	int a,b,c;
	printf("Enter any number=\n");
	scanf("%d%d",&a,&b);
	c=a/b;
	return c;
}
