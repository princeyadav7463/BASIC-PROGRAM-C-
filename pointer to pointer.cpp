#include<stdio.h>
int main()
{
	int i,sum=0,*p;
	int a[5]={7,5,4,6,2};
	p=a;
	printf("Elements\t value\t Address,i,*p,p");
	for(i=0;i<5;i++)
	{
		printf("\n a[%d]\t%d\t%u",i,*p,p);
		sum=sum+*p;
		p++;
	}
	printf("\n sum=%d\n",sum);
	return 0;
}
