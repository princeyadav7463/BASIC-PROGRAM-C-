#include<stdio.h>
void cube(float);
int main()
{
	void (*vol)(float);
	vol=&cube;
	float a;
	printf("Enter the value of a=");
	scanf("%f",&a);
	vol(a);
	
	return 0;
}
void cube(float x)
{
	float res;
	res=x*x*x;
	printf("volume of the cube=%f\n",res);
}
