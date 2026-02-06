#include<stdio.h>
void add(int ,int);
int main()
{
	void (*sum)(int , int);
	sum=&add;
	int a,b;
	printf("Enter the value of a&b=\n");
	scanf("%d%d",&a,&b);
	sum(a,b);
	
	return 0;
}
void add(int x,int y)
{
	int c=x+y;
	printf("sum of two number=%d\n",c);
}
