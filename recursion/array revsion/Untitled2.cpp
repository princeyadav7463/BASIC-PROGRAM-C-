#include<stdio.h>
int main()
{
	int i,s=0,n,a[20],avg;
	printf("Enter the range of array =\n");
	scanf("%d",&n);
	printf("Enter %d array elements =\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n array elements are=\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d",i,a[i]);
	 	s=s+a[i];
	}
	avg=s/n;
	printf("\nSum=%d",s);
	printf("\n Average =%d",avg);
	return 0;
}
