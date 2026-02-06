#include<stdio.h>
int vol();
int main()
{
	int r=vol();
	printf("volume of cuboid=%d\n",r);
	printf("volume of cuboid=%d\n",vol());
	
	
	return 0;
}
int vol()
{
	int vol,l,b,h;
	printf("Enter the value of l&b&c=");
	scanf("%d%d%d",&l,&h,&b);
	vol=l*b*h;
	return vol;
}
