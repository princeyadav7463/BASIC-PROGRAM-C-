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
	printf("Emter the value of r&h=\n");
	scanf("%f%f",&r,&h);
	vol=1.345*(r*r*h);
	printf("volume of cylender=%f\n",vol);
}
