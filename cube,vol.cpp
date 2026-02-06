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
	int a , vol;
	printf("Enter the value of a=");
	scanf("%d",&a);
	vol=a*a*a;
	printf("Volume of cube =%d\n",vol);
}
