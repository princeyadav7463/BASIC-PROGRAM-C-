#include<stdio.h>
int main()
{
	int a[3][3]={{2,3,4,},{3,5,6,},{4,6,4,}};
	int i,j,sum=0;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d",&a[i][j]);
		}
	}

		for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}
