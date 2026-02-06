#include<stdio.h>
int main()
{
	int arr[100];
	int n, i, sum= 0 ;
	printf("Enter the size of an array=");
	scanf("%d", &n);
	printf("Enter the elements of an array=");
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for(i=0; i<n; i++)
	{
		sum = sum + arr[i];
	}
	printf("Sum of array elements = %d", sum);
	return 0;
}
