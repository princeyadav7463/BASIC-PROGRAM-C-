#include<stdio.h>
int vol();
int main()
{
	int r=vol();
	printf("volume of cube=%d\n",r);
	printf("volume of cube=%d\n",vol());
	
	return 0;
}
int vol()
{
	int vol, a;
	printf("Enter the value of a=");
	scanf("%d",&a);
	vol=a*a*a;
	return vol;
	
}
