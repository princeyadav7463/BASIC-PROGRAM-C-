/* write a program to input element in 3*3 matrix and print 
3*2
4*4
2*4
*/
#include<stdio.h>
int main()
{
	int a[3][2]={{4,5},{9,7},{3,4}};
	int i,j;
	printf("print array element=\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
