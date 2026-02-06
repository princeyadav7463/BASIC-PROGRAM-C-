#include<stdio.h>
#include<conio.h>
int main()
{
	int a[200],n,i,ln,sn;
	printf("Enter the range of array=");
	scanf("%d",&n);
	printf("\n Enter %d element of arrray=",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	ln=a[0];
	sn=a[0];
	printf("\n Array element are =ln");
	for(i=0;i<n;i++)
	{
	printf("\n a[%d]=%d",i,a[i]);	
	if(ln<sn)
	{
		ln=a[i];
	}
	if(sn>a[i])
	{
		sn=a[i];
	}
   }
	printf("\n largest number =%d",ln);
	printf("\n smallest number =%d",sn);
	getch();
}
