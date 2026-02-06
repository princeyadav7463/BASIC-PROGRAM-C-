#include<stdio.h>
int main()
{
	int a[10],counting,i;
    a[0]=12;
	a[1]=1;
	a[2]=4;
	a[3]=5;
	a[4]=65;
	a[5]=8;
	a[6]=59;
	a[7]=41;
	a[8]=2;
	a[9]=6;
	printf("Display array elements\n");
	for(i=0;i<=9;i++)
	{
		if(a[i]%2==0)
		{
			printf("Even number=%d",i);
			printf("\n");
		}
		counting=i+1;
	}	
	printf("Only even number counting=%d",counting);
}
