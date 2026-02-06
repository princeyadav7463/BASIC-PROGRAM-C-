#include<stdio.h>
void add(int , int);
void sub(int,int);
void multi(int , int);
void div(int , int);
int main()
{
	add(4 ,8);
	add(8 ,3);
	sub(8,22);
	sub(992,432);
	multi(32,2);
	multi(43,5);
	div(43,2);
	div(44,2);
	
	
	return 0;
}
void add(int x , int y)
{
	int z=x+y;
}
void sub(int x , int y)
void multi(int x , int y)
void div(int x, int y)
{
	int z=x+y;
	int z=x-y;
	int z=x*y;
	int z=x/y;
	printf("sum of two number=%d\n",z);
	printf("subtract of two number=%d\n",z);
	printf("multiply of two number=%d\n",z);
	printf("divided of two number=%d\n",z);
}
