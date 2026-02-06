#include<stdio.h>
void add();
int main()
{
  add();
  add();
  add();
  return 0;	
}
void add()
{ 
	int a,b,c;
	printf("\nEnter any two number=\n");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("sum of two number=%d\n",c);
}
