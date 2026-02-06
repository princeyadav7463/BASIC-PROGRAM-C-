#include<stdio.h>
int main()
{
	int i ,n, a[40];
	printf("Enter the range of array =\n");
	scanf("%d",&n);
	printf("Enter %d the array elements=\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\narray elements are =\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	return 0;
}
