#include<stdio.h>
void mult();
int main()
{
	mult();
	mult();
	return 0;
}
void mult()
{
	int a , b, c;
	printf("\nEnter any two number=\n");
	scanf("%d%d",&a,&b);
	c=a*b;
	printf("multiply of two number=%d\n",c);
}
