#include<stdio.h>
#include<conio.h>
int main()
{
	int a[50],n,i,element,f=0;
  	printf("Enter the range of array=");
	scanf("%d",&n);
	printf("\n Enter %d element of array=",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Array elemets are =");
	for(i=0;i<n;i++)
	{
		printf("\n a[%d]=%d",i,a[i]);
	}
	printf("\n Enter the element you want to search=");
	scanf("%d",&element);
	for(i=0;i<n;i++)
	{
		if(a[i]==element);
		{
			f=1;
			break;
		}
	}
	if(f==1)
	{
		printf("\n Search is successful and location is %d",(i+1));
	}
	else
	{
		printf("\n search us unsuccessful ");
    }
    getch();
}
