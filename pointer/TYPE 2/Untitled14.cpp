#include<stdio.h>
void circle(float);
int main()
{
	void (*peri)(float);
	peri=&circle;
	float r;
	printf("Enter the radius of circle=\n");
	scanf("%f",&r);
	peri(r);
	
	return 0;
}
void circle(float p)
{
	float res;
	res=2*3.145*p;
	printf("perimeter of circle =%f\n",res);
}
