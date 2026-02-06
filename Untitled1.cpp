#include<stdio.h>
int main()
{
	int n,r,i,s=0;
	printf("Enter any number");
	scanf("%d",&n);
	for(i=1;n==0;i++)
	{
		r=n%10;
		s=s+r;
		n=n/10;
	}
	printf("sum of digit=%d",s);
}
