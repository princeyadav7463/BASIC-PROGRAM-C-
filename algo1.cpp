#include<stdio.h>
int main()
{
	int n,i=1;
	printf("Enter the valu of n=");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==0&&i%3==0)
		{
			printf("Divisible by 2 and 3=%d",i);
		}
		i++;
	}
	return 0;
}
