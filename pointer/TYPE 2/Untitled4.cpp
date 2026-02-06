#include<stdio.h>
void divided(int ,int);
int main()
{
	void (*div)(int , int);
	div=&divided;
	int a,b;
	printf("Enter the value of a&b=\n");
	scanf("%d%d",&a,&b);
	div(a,b);
	
	return 0;
}
void divided(int x,int y)
{
	int c=x/y;
	printf("divided of two number=%d\n",c);
}
