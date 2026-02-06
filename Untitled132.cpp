#include<stdio.h>
int main()
{
	int i,j,sum=0,a[2][2]={{3,2},{7,3}};
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			if(i+j==2)
			{
				sum=sum+a[i][j];
			}
		}
	}
	printf("sum of left diogonal%dis=%d\n",i,sum);
	return 0;
}
