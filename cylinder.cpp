#include<stdio.h>
int cylinder();
int main()
{
	int r= cylinder();
	printf("volume of cylinder=%d\n",r);
	printf("volume of cylinder=%d\n",cylinder());
	
	return 0;
}
int cylinder()
{
	float vol,r,h;
	printf("Enter the value of r&h=\n");
	scanf("%f%f",&r,&h);
	vol=3.145*r*r*h;
	
	return vol;
}
