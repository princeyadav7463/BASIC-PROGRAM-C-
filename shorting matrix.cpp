#include<stdio.h>
int main()
{
	int a[i][j],b[i][j],c[i][j];
	int i,j,n,temp;
	printf("Enter first matrix elements=\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("first matrix elements are=\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Enter seconds matrix elements are=\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d\t",&b[i][j]);
		}
		printf("\n");
	}
	printf("second matrix elements are=\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}
