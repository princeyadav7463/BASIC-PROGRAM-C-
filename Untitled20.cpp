/* write a program in c to insart and element at specified posotion */

#include<stdio.h>
#include<conio.h>
int main()
{
	int a[50],i,n,element,pos;
	printf("\n Enter the range of array (<=50)=");
	scanf("%d",&n);
	printf("\n Enter %d element of array =",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Array element before insertion=");
	for(i=0;i<n;i++)
	{
		printf("\n Enter the element you want to insert=");
		scanf("%d",&element);
		printf("\n Enter the position where you want to insert=");
    	scanf("%d",pos);
		for(i=n-1;i>=pos;i--)
		{
			a[i+1]=a[i];
		}
		a[pos]=element;
		n++;
    	printf("\n Array element after insertion=");
	    for(i=0;i<n;i++)
	{
		printf("\n a[%d]=%d",i,a[i]);
	}
	getch();
    }
}
