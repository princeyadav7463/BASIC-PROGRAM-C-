#include<stdio.h>
void multiply(int ,int);
int main()
{
	void (*multi)(int , int);
	multi=&multiply;
	int a,b;
	printf("Enter the value of a&b=\n");
	scanf("%d%d",&a,&b);
	multi(a,b);
	
	return 0;
}
void multiply(int x,int y)
{
	int c=x*y;
	printf("multiply of two number=%d\n",c);
}
