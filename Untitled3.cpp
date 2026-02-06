#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,res;
	
	printf("Enter the value of a=");
	scanf("%f",&a);
	
	printf("Enter the value of b=");
	scanf("%f",&b);
	
	printf("Enter the value of c=");
	scanf("%f",&c);
	
	res=sqrt(a+b+c)/2;
	printf("squre root = %f",res);
	
	return 0;
}
