#include<stdio.h>
int main()
{
	int a[10],i;
	a[0]=4;
	a[1]=5;
	a[2]=-51;
	a[3]=52;
	a[4]=54;
	a[5]=-33;
	a[6]=11;
	a[7]=-22;
	a[8]=20;
	a[9]=-10;
	printf("Display array element=");
	for(i=0;i<=9;i++)
	{
		if(a[i]>=0)
		{
			printf("positive number=%d",i);
		}
		printf("\n");
	}
	return 0;
}
