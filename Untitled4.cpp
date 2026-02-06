#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,res;
	printf("Enter the value of x=");
	scanf("%f",&x);
	
	printf("Enter the value of y=");
	scanf("%f",&y);
	
	res=sqrt(pow(x,2)+pow(y,2))/(x-y);
	printf("squre root = %f",res);
	
	return 0;
}
