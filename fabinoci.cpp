#include<stdio.h>
int main()
{
	int f1=0,f2=1,f3,n;
	printf("Enter the range =");
	scanf("%d",&n);
	for(f3=0;f3<=n;f3=f1+f2)
	{
		if(f3%2==0)
		printf("\t%d",f3);
		f1=f2;
		f2=f3;
	}
	return 0;
}
