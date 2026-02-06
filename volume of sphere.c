#include<stdio.h>
int main()
{
	float r,vol;
	
	printf("Enter the radius=");
	scanf("%f",&r);
	
	vol=1.33*3.1415*r*r*r;
	
	printf("volume of sphere=%f",vol);
	
	return 0;
}
