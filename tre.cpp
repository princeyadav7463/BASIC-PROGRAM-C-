#include<stdio.h>
#include<conio.h>
int main()
{
	int f1=0,f2=1,f3,n;
	printf("Enter range=");
	scanf("%d",&n);
	for(f3=0;f3<=n;f1=f1+f2)
	{
		printf("\t%d",f3);
		f1=f2;
		f2=f3;
	}
	return 0;
}
