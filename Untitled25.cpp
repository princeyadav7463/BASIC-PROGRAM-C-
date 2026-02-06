#include<stdio.h>
int main()
{
	int i,j,sum=0,a[3][3]={{5,2,7},{4,3,6},{7,5,1}};
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i+j==4)
			{
				sum=sum+a[j][i];
			}
		}
	}
	printf("sum of right diagonal=%d",sum);
	return 0;
}
