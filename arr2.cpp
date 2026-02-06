#include<stdio.h>
int main()
{
	int i,a[]={3,-2,1,44,-22,3,7,-8,9,-15};
	int sum=0;
	printf("Array elements are =\n");
	for(i=0;i<10;i++)
	{
		printf("[%d]=%d\n",i,a[i]);
		sum=sum+i;
	}
	printf("sum of series=%d\n",sum);
	
	return 0;
}
