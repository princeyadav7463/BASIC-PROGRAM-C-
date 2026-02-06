#include<stdio.h>
int main()
{
	int a[10][10],i,j,col,row;
	printf("Enter the size of row=\n");
	scanf("%d",&row);
	printf("Enter the size of column=\n");
	scanf("%d",&col);
	printf("Enter the %d matrix elements are=\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix elements are=\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
