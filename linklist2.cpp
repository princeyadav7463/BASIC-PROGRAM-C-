#include<stdio.h>
int main()
{
	int i,j,t,a[50],n;
	printf("Enter the size =");
	scanf("%d",&n);
	printf("Enter the %d array elements are=\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array elements before selection shorting=\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("\n Array elements selection shoring are=\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
