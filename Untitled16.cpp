#include<stdio.h>
int main()
{
	int a[]={2,5,7,6,5};
	int n = sizeof(a)/sizeof (int);
	int count,i;
	printf("Display array elements\n");
	for(i=0;i<=4;i++)
	{
		if(a[i]%2!=0)
		{
			count++;
		}
	}
	printf("Only counting odd number=%d",count);
	return 0;
}
