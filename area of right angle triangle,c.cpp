#include<stdio.h>
int main()
{
	float r,h,vol;
	
	printf("Enter the radius=");
	scanf("%f",&r);
	
	printf("Enter the height=");
	scanf("%f",&h);
	
	vol=3.1415*r*r*h;
	
	printf("area of right angle triangle=%f",vol);
	
	return 0;
}
