#include<stdio.h>
int main()
{
	int a[50],s,n,i,ln,sn;
	printf("Enter the range of array elements =");
	scanf("%d",&n);
	printf("Enter the %d elements in arraye =",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&n);
	}
	ln=a[0];
	sn=a[0];
	printf("Arr
		printf("a[%d]=%d\n",i,a[i]);
		if(ln<a[i])
		{
			ln=a[i];
		}
		if(sn>a[i])
		{
			sn=a[i];
		}
	}
	printf("\n largest number=%d\n",ln);
	printf("\n Smallest number=%d\n",sn);
}
