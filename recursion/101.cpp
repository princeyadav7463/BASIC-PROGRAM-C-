#include<stdio.h>
int main()
{
	int i,j,x,y;
	for(i=0;i<=4 c;i++)
	{
		if(i%2==0)
		{
			x=1;
			y=0;
		}
		else
		{
			x=0;
			y=1;
		}
		for(j=1;j<=i;j++)
		{
			if(j%2==0)
			printf("%d",x);
			else
			printf("%d",y);
		}
			printf("\n");
	}
	return 0;
}
