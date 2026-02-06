#include<stdio.h>
int main()
{
	int arr[]={3,-5,3,8,6,-4,-4};
	int i,c=0;
	printf("Positive Array element are=\n ");
	for(i=0;i<7;i++)
	{
		printf("[%d]=%d\n",i,arr[i]);
	}
	for(i=0;i<7;i++)
	{
		if(arr[i]>0)
		{
			c++;
		}
	}
	printf("count =%d\n",c);
	return 0;
}
