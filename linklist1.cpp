#include<stdio.h>
int main()
{
	int i,j,a[50],n,t;
	printf("Enter the size =");
	scanf("%d",&n);
	printf("Enter array elemets are=\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array elements before shorting=\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
		printf("\nArray elemetns after shorting=\n");
		for(i=0;i<n;i++)
		{
			printf("%d\t",a[i]);
		}
	return 0;
}
