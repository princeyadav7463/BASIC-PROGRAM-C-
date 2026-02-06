#include<stdio.h>
#include<math.h>
int main()
{
	int choose ,cricle, triangle,righttriangle,res,r,b,h,a,c,s;
	printf("Enter your choose=\n");
	scanf("%d",&choose);
	switch(choose)
	{
		case 1:
			printf("Enter the value of r=\n");
			scanf("%d",&r);
			res=3.145*(r*r);
			printf("Area of circle =%d",res);
			break ;
		case 2:
			printf("Enter the value of a , b and c=\n");
			scanf("%d%d",&b,&h);
			s=(a+b+c)/2;
			s=1.5 (s*(s-a)*(s-b)*(s-c));
			printf("Area of triangle=%d",res);
			break;
		case 3:
			printf("Enter the area of right triangle=\n");
			break;
	}
}
