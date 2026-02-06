#include<stdio.h>
#include<math.h>
int main()
{
	int a[3][3]={{9,2,3},{5,4,5},{8,9,7}};
	int i,j,sum=0;
	printf("print array element=\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
				sum=sum+a[i][j];
		}
		printf("\n");
	}
	printf("sum of series=%d",sum);
	return 0;
}
