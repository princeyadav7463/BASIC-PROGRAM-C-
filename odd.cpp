#include<stdio.h>
void show(int[2][2],int ,int);
void odd(int[2][2],int ,int);
int main()
{
	int a[2][2]={{3,6},{4,9}};
	int row=2,col=2;
	printf("print matrix elements =\n");
	show(a,row,col);
	odd(a,row,col);
	
	return 0;
}
void show(int x[2][2],int row,int col)
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",x[i][j]);
		}
		printf("\n");
	}
}
void odd(int x[2][2],int row ,int col)
{
	int odd ,i,j;
	printf("odd number print=\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(x[i][j]%2!=0)
			{
				printf("%d\t",x[i][j]);
			}
		}
	}
	printf("\n odd of matrix element =%d\n",x[i][j]);
}
