#include<stdio.h>
int main()
{
	int a[10],i,sum=0;
	a[0]=1;
	a[1]=5;
	a[2]=-4;
	a[3]=3;
	a[4]=6;
	a[5]=8;
	a[6]=5;
	a[7]=7;
	a[8]=6;
	a[9]=9;
	printf("Display array element\n");
	for(i=0;i<=9;i++)
	{
		if(a[i]%2==0)
    	sum=sum+1;
	}
	printf("sum of series=%d",sum);
	return 0;
}
