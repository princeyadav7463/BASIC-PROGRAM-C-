#include<stdio.h>
int main()
{
	int a[]={10,11,62,89,20,54,98,78,35,45};
	int i,flag=0,data,n=sizeof(a)/sizeof(int);
	printf("Enter the data search=");
	scanf("%d",&data);
	for(i=0;i<n;i++)
	{
		if(a[i]==data)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("%d is found at index no=%d",data,i);
	}
	else
	{
		printf("%d is not found",data);
	}
	return 0;
}
