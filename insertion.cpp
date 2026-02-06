#include<stdio.h>
#include<conio.h>
int main()
{
	int a[50],i,n,elements,pos;
	printf("Enter the size of array elements=");
	scanf("%d",&n);
	printf("Enter the %d elements in array=",n);
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array elements are before insertion=\n");
	for(i=0;i<=n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nEnter position=\n");
	scanf("%d",&pos);
	printf("Enter the elements to want to insert=\n");
	scanf("%d",&elements);
	for(i=n-1;i>=pos;i--)
	{
		a[i+1]=a[i];	
	}
		a[pos]=elements;
		n=n+1;
	printf("Array elements insertion=\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	getch();
}
