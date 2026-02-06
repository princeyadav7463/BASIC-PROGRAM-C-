#include<stdio.h>
int main()
{
	int a[3][3],i,j,d1=0,d2=0;
	printf("Enter 3*3 elements of matrix=");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n matix element are=\n");
	for(i=0;i<3;i++)
	{
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d\t",a[i][j]);
			}
		printf("\n");
		}
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				if(i==j)
				{
					d1=d1+a[i][j];
				}
				if	(i+j==2)
				{
				 d2=d2+a[i][j];
				}
			}
		}
			printf("\n sum of left diagonal=%d",d1);
			printf("\n sum of right dianonal=%d",d2);
	}
	return 0;
}
