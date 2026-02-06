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
	float l,b,h,vol;
	printf("Enter the value of l&b&h=\n");
	scanf("%f%f%f",&l,&b,&h);
	vol=(l*b*h);
	printf("volume of cubiod=%f",vol);
}
