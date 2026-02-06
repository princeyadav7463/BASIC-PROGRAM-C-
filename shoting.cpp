#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3];
	int a[i][j];
	int i,j,temp;
	printf("Enter first matrix elements=\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("Frist martix elements are=\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Enter second matrix elements are=\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d\t",&b[i][j]);
		}
		printf("\n");
	}
	printf("second matrix elements are=\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("shorting elements are=\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		printf("%d\t",temp);
	}
	return 0;
}
