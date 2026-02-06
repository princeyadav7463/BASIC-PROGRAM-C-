#include<stdio.h>
void multi(int , int);
int main()
{
	multi(4 ,8);
	multi(8 ,3);
	
	
	return 0;
}
void multi(int x , int y)
{
	int z=x*y;
	printf("multiply of two number=%d\n",z);
}
