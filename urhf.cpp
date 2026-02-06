#include<stdio.h>
void fore();
int main()
{
	fore();
	fore();	
	return 0;
}
void fore()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

