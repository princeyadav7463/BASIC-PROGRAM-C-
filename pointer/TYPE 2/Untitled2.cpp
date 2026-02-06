#include<stdio.h>
void subtract(int ,int);
int main()
{
	void (*sub)(int , int);
	sub=&subtract;
	int a,b;
	printf("Enter the value of a&b=\n");
	scanf("%d%d",&a,&b);
	sub(a,b);
	
	return 0;
}
void subtract(int x,int y)
{
	int c=x-y;
	printf("subtract of two number=%d\n",c);
}
