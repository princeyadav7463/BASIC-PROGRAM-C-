#include<stdio.h>
int main()
{
	int a[2][2]={{8,4},{9,5}};
	int i,j,sum=0;
	for(i=0;i<2;i++)
	{
		sum=0;
		for(j=0;j<2;j++)
		{
			if(i==j)
			{
			    sum=sum+a[i][j];
		    }
		}
	}
	printf("sum of right digonal %d is =%d\n",i,sum);
	return 0;
}
