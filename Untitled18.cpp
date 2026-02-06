#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[100],i,s=0,n;
	float avg;
	printf("\n Enter range of array=");
	scanf("%d",&n);
	printf("\n Enter %d element of array=",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n Array element are =\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,arr[i]);
		s=s+arr[i];
	}
	avg=s/n;
	printf("\n sum =%d",s);
	printf("\n avrage =%d",avg);
	getch();
}
