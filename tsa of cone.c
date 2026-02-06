#include<stdio.h>
int main()
{
	float r,l,tsa;
	
	printf("Enter the radius=");
	scanf("%f",&r);
	
	printf("Enter the length=");
	scanf("%f",&l);
	
	tsa=3.1415*r*(l+r);
	
	printf("tsa of cone=%f",tsa);
	
	return 0;
}
