#include<stdio.h>
void pattern();
int main()
{
	pattern();
	return 0;
}
void pattern()
{
	int i,j;
	printf("Print the pattern=\n");
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==1||j==1||i==5||j==5)
			{
				printf("*");
			}
			else
			{
				printf("\n");
			}
		}
	}
}
