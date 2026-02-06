#include<stdio.h>
int main()
{
	int x,i,sum=0,n;
	 printf("Enter the value of x=");
	 scanf("%d",&x);
	 printf("Enter the value of n=");
	 scanf("%d",&n);
	 for(i=1;i<=n;i++)
	 {
	 	sum=sum+x/n;
	 }
	 printf("sum of series=%d",sum);
	 return 0;
}

