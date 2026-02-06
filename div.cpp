#include<stdio.h>
void div();
int main()
{
	div();
	div();
	return 0;
}
void div()
{
	float a , b, c;
	printf("\nEnter any two number=\n");
	scanf("%f%f",&a,&b);
	c=a/b;
	printf("divided of two number=%f\n",c);
}
