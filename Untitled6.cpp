#include<stdio.h>
void show(int[],int);
int count(int[],int);
int main()
{
	int a[]={3,22,5,4,6,7,5,4,3,32,55,33,66,99};
	int n= sizeof(a)/sizeof(int);
	int res;
	printf("print array element=\n");
	show(a,n);
	res=count(a,n);
	printf("count of odd array in elemetns=%d",res);
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
		if(a[i]%2!=0)
		{
			count=count+1;
		}
	}
	return count;
}
