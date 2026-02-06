#include<stdio.h>
int main()
{
	int a[2][4]={{4,5,9,2},{4,5,9,7}};
	int i,j;
	printf("print array element=\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
