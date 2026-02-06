#include<stdio.h>
#include<math.h>
int main()
{
	float s,a,b,c,res;
	
	printf("Enter the value of s=");
	scanf("%f",&s);
	
	printf("Enter the value of a=");
	scanf("%f",&a);
	
	printf("Enter the value of b=");
	scanf("%f",&b);
	
	printf("Enter the value of c=");
	scanf("%f",&c);
	
	res=sqrt(pow(s*(s-a)*(s-b)*(s-c)));
	printf("squre root = %f",res);
	
	return 0;
}
