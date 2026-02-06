#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[100],i,n;
	printf("\nEnter the range of array=");
	scanf("%d",&n);
	printf("\nEnter %d element of array elment of array=",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n Array elements are =\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\t",i,arr[i]);
	}
	getch();
}
