#include<stdio.h>
int main()
{
	int a[10][10],i,j,row,col;
	printf("Enter the size of row=");
	scanf("%d",&row);
	printf("Enter the size of column=");
	scanf("%d",&col);
	printf("Enter the %d matrix elements are=\n",(row*col));
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
	printf("Transpose matrix are=\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
	return 0;
}
