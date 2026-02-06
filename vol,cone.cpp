#include<stdio.h>
#include<math.h>
void volume();
int main()
{
	volume();
	volume();
	
	return 0;
	
}
void volume()
{
	float r,h,vol;
	printf("Enter the value of r=");
	scanf("%f",&r);
	printf("Enter the value of h=");
	scanf("%f",&h);
	vol=1.3*(3.145*r*r*h);
	printf("volume of cone=%f\n",vol);
}
