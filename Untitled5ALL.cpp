#include<stdio.h>
void add();
void sub();
void mult();
void div();
int main()
{
	sub();
	add();
	mult();
	div();
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
void sub()
{
	int a , b, c;
	printf("\nEnter any two number=\n");
	scanf("%d%d",&a,&b);
	c=a-b;
	printf("subtract of two number=%d\n",c);
}
void mult()
{
	int a , b, c;
	printf("\nEnter any two number=\n");
	scanf("%d%d",&a,&b);
	c=a*b;
	printf("multiply of two number=%d\n",c);
}
void div()
{
	float a , b, c;
	printf("\nEnter any two number=\n");
	scanf("%f%f",&a,&b);
	c=a/b;
	printf("divided of two number=%f\n",c);
}
