#include<stdio.h>
int main()
{
	int i,j,d1,d2,a[3][3]={{4,3,5,},{3,8,6},{6,2,9}};
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i+j==2)
			{
				d1=d1+a[i][j];
			}
			if(i==j)
			{
				d2=d2+a[i][j];
			}
		}
	}
	printf("matrix elements are=\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("sum of right diagonal=%d\n",d1);
	printf("sum of left diagonal=%d\n",d2);
	return 0;
}
