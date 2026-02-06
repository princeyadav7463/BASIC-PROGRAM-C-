#include<stdio.h>
int main()
{
	int a[10],s,n,i,arg;
	printf("Enter the range of array elements are=");
	scanf("%d",&n);
	printf("Enter the %d elements in array=",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array elements are =\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
		s=s+a[i];
	}
	arg=s/n;
	printf("\n sum =%d",s);
	printf("\n avrage =%d",arg);
	return 0;
}
