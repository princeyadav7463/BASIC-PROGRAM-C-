#include<stdio.h>
void show(int[],int);
int sum(int[],int);
int main()
{
	int a[]={3,2,5,6,33,25,83};
	int n= sizeof(a)/sizeof(int);
	int res;
	printf("print array element=\n");
	show(a,n);
	res=sum(a,n);
	printf("sum of odd array in elemetns=%d",res);
	return 0;
}
void show(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
int sum(int a[],int n)
{
	int sum=0,i;
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			sum=sum+1;
		}
	}
	return sum;
}
