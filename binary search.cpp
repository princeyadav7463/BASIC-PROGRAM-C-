#include<stdio.h>
#include<conio.h>
int main()
{
	int a[50],i,n,big,end,mid,f=0,element;
	printf("Enter the range of array element=");
	scanf("%d",&n);
	printf("Enter %d element of array in asending=",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	big=0;
	end=n-1;
	printf("\n Array elements are =");
	for(i=0;i<n;i++)
	{
		printf("\n a[%d]=%d",i,a[i]);
	}
	printf("Enter the element of your to search=");
	scanf("%d",&element);
	while(big<=end)
	{
		mid=(big+end)/2;
		if(a[mid]==element)
		{
			f=1;
			break;
		}
		else if(a[mid]<element)
		{
			big=mid+1;
		}
		else 
		{
			end=mid-1;
		}
	}
		if(f==1)
		{
			printf("\n search is sucessful and the location is %d",(mid+1));
		}
		else
		{
			printf("\n search is unsuccessful ");
		}
		getch();
}
