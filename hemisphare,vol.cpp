#include<stdio.h>
#include<math.h>
void volume();
int main()
{
	volume();
	volume();
	
	return 0;
	
}
void volume()
{
	int r,vol;
	printf("Enter the value of r=");
	scanf("%d",&r);
	vol=2%3*3.145*r*r*r;
	printf("volume of hemisphare=%d\n",vol);
}
