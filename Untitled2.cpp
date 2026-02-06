*#include<stdio.h>
int main()
{
	int a[3][3]={{1,4,5},{6,9,7},{8,4,6}};
	int i,j;
	printf("print array element=\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
