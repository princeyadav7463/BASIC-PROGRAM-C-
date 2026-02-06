#include<stdio.h>
int main()
{
	int i,n,f=1;
	printf("Enter any intiger number=");
	scanf("%d",&n);
	if(n<0)
	{
		printf("\n factorial of negative number can not be calculated=");
	}
	else if(n==0)
	{
		printf("\n factorial of 0 is 1");
	}
	else 
	{
	 for(i=1;i<=n;i++)
    	{
	    	f=f*i;
	    }
	  printf("\n factoreial of %d=%d",n,f);
    }
	return 0;
}
