#include<stdio.h>
int main()
{
	int i,j,k;
    for(i=1;i<=4;i++)
    {
    	for(k=i;k<4;k++)
    	{
    		printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(j=i-1;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	 for(i=4;i>=1;i--)
    {
    	for(k=i;k<4;k++)
    	{
    		printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(j=i-1;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
