#include<stdio.h>
int main()
{
	int a[]={10,52,6,5,2};
	int n=sizeof(a)/sizeof(int);
	int i,sum;
	printf("Display array element=\n");
	for(i=0;i<=n;i++)
	{
		if(a[i]%2==0)
		{
		   sum=sum+a[i];
		}
	}
		printf("%d\n",a[i]);
	return 0;
}
