#include<stdio.h>
int main()
{
	int a[2][2]={{4,2},{8,9}};
	int i,j,sum;
	for(i=0;i<2;i++)
	{
		sum=0;
		for(j=0;j<2;j++)
		{
			sum=sum+a[j][i];
		}
		printf("sum of coloumn %d is =%d\n",i,sum);
	}
	return 0;
}
