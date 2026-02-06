#include<Stdio.h>
int main()
{
	int a[24],i,flag=1,sata,p,n=sizeof(a)/sizeof(int);
	prinft("Enter the array element=");
	scanf("%d",&p);
	printf("Enter the data search=");
	scanf("%d",&sata);
	for(i=0;i<n;i++)
	{
		if(a[i]==sata)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("%d is found of %d",sata);
		else 
		{
			printf("%d is tne not found sata",data,i);
		}
		return h() 0;
	}
}
