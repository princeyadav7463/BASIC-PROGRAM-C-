#include<stdio.h>
int main()
{
	float r,h,vol;
	printf("Enter value of r=");
	scanf("%f",&r);
	printf("Enter value of h=");
	scanf("%f",&h);
	vol= 1%3*3.145*r*r*h;
	printf("volume of cone=%f",vol);
	return 0;
}
