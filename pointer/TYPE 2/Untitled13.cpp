#include<stdio.h>
void sphere(float);
int main()
{
	void (*vol)(float);
	vol=&sphere;
	float r;
	printf("Enter the radius of sphere=\n");
	scanf("%f",&r);
	vol(r);
	
	return 0;
void sphere(float p)
{
	float res;
	res=1.34*3.145*p*p*p;
	printf("Volume of sphere =%f\n",res);
}
