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
	printf("Odd number in this matrix elements are=\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(a[i][j]%2!=0)
			{
				printf("%d\t",a[i][j]);
			}
		}
	}
	return 0;
}
