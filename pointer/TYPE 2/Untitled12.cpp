#include<stdio.h>
void cone(float ,float);
int main()
{
	void (*vol)(float,float);
	vol=&cone;
	float r,h;
	printf("Enter the valus of radius and height=\n ");
	scanf("%f%f",&r,&h);
	vol(r,h);
	
	return 0;
}
void cone(float x,float y)
{
	float res;
	res=0.33*3.14*x*x*y;
	printf("volume of cone =%f\n",res);
}
