#include<stdio.h>
int main()
{
	int a[5],i;
	printf("Enter the array elements are=");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array elemets are=\n");
	for(i=0;i<5;i++);
	{
		printf("%d",a[i]);
	}
	return 0;
}
