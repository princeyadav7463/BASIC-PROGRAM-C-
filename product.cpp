#include<stdio.h>
int main()
{
	int a[3][3]={{3,4,5},{5,8,7},{9,5,3}};
	int b[3][3]={{6,7,5},{6,3,9},{9,6,3}};
	int c[3][3];
	int i,j,k,sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=0;
			for(i=0;i<3;i++)
			{
				c[i][j]=c[i][j]+a[i][j]*b[i][j];
			}
		}
	}
	printf("First matrix elements are=\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Second matrix elements are=\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("sum of matrix elements=\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
