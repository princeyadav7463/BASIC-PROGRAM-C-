#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,m,n,res;
	
	printf("Enter the value of x=");
	scanf("%f",&x);
	
	printf("Enter the value of y=");
	scanf("%f",&y);
	
	printf("Enter the value of m=");
	scanf("%f",&m);
	
	printf("Enter the value of n=");
	scanf("%f",&n);
	
	
	res=(pow(x,m)+pow(y,n))/(m+n);
	printf("result is = %f",res);
	
	return 0;
}
