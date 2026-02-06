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
	float r,vol;
	printf("Enter the value of r=");
	scanf("%f",&r);
	vol=4/3*3.145*r*r*r;
	printf("volume of sphere=%f\n",vol);
}
