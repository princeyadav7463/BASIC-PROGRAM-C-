#include<stdio.h>
#include<math.h>
void volume(float h , float r);
int main()
{
	
	vol(4,5);
	vol(8,3);
	
	return 0;
	
}
void vol(float h , float r)
{
	float r,h,vol;
	vol=1.3*(3.145*r*r*h);
	printf("volume of cone=%f\n",vol);
}
