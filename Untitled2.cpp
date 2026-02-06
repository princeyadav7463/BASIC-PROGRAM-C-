#include<stdio.h>
void show(int[],int);
int count(int[],int);
int main()
{
	int a[]={3,2,5,6,7,3,2,8};
	int n= sizeof(a)/sizeof(int);
	int res;
	printf("print array element=\n");
	show(a,n);
	res=count(a,n);
	printf("count of even array in elemetns=%d",res);
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
int count(int a[],int n)
{
	int count=0,i;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			count=count+1;
		}
	}
	return count;
}
