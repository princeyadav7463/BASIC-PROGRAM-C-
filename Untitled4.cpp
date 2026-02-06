#include<stdio.h>
int main()
{
	int a[4][4]={{6,2,4,5},{8,2,9,7},{9,1,7,6},{3,2,5,7}};
	int i,j;
	printf("print array element=\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
