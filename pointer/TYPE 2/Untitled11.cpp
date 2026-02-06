#include<stdio.h>
void cylinder(float , float);
int main()
{
	void (*vol)(float,float);
	vol=&cylinder;
	float r,h;
	printf("Enter the radius and height of cylinder=\n");
	scanf("%f%f",&r,&h);
	vol(r,h);
	
	return 0;
}
void cylinder(float x,float y)
{
	float res;
	res=3.145*x*x*y;
	printf("Volume of cylinder=%f\n",res);
}
