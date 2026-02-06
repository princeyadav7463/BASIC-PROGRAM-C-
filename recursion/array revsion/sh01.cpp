#include<stdio.h>
int main()
{
	int i,j,temp=0,a[10];
	printf("Enter the elements in the array=");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<=1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\n Sorted array elements =");
	for(i=0;i<10;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
