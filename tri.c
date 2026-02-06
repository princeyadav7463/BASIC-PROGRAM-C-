#include<stdio.h>
int main()
{
	float b,h,tri;
	
	printf("Enter the height=");
	scanf("%f",&h);
	
	printf("Enter the baise=");
	scanf("%f",&b);
	
	tri=1.55*b*h;
	
	printf("area of tringle=%f",tri);
	
	return 0;
}
