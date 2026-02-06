#include<stdio.h>
int main()
{
	int arr[20],i,n;
	printf("Enter the range of array elements=");
	scanf("%d",&n);
	printf("Enter the %d elements in array=",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",& arr[i]);
	}
	printf("Array elements are =\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
