#include<stdio.h>
#include<math.h>
int main()
{
	float w,x,y,z,res;
	
	printf("Enter the value of w=");
	scanf("%f",&w);
	
	printf("Enter the value of x=");
	scanf("%f",&x);
	
	printf("Enter the value of y=");
	scanf("%f",&y);
	
	printf("Enter the value of z=");
	scanf("%f",&z);
	
	res=sqrt(pow(w-x,2)+pow(y-z,2));
	printf("squre root = %f",res);
	
	return 0;
}
