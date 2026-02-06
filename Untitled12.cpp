#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,m,n,res;
	
	printf("Enter the value of x1=");
	scanf("%f",&x);
	
	printf("Enter the value of y1=");
	scanf("%f",&y);
	
	res=sqrt(pow(x,2)+pow(y,2))/sqrt(pow(x,2)-pow(y,2));
	printf("squre root=%d",res);
	return 0;
	
}
