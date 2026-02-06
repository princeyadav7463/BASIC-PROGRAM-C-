#include<stdio.h>
int main()
{
	int i,table,n;
	printf("Enter any integer number=");
	scanf("%d\n",&n);
	for(i=1;i<=10;i++)
	{
		table=n*i;
		printf("%d*%d=%d\n",n,i,table);
	}
	return 0;
}
