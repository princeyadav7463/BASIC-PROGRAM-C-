#include<stdio.h>
int main()
{
	float tsa,r,h;
	
	printf("Enter the radius=");
	scanf("%f",&r);
	
	printf("Enter the height=");
	scanf("%f",&h);
	
	tsa=2*3.1415*r*(h+r);
	
	printf("tsa of cylinder=%f",tsa);
	
	return 0;
	
}
