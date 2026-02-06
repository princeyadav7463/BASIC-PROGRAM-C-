#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	char c;
	printf("Enter your choice=");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("a.Area of cube\n");
			printf("b.Area of cone\n");
			printf("c.Area of cylinder\n");
			printf("d.Area of tringle\n");
			printf("e.Area of circle\n");
			printf("Enter your choice=\n");
			fflush(stdin);
			scanf("%c",&c);
			switch(c)
			{
				case 'a':
					printf("Area of cube=\n");
					printf("Enter the value of r=");
					scanf("%d",&r);
					res=4*r*r;
					printf("res is=%d",res);
					break;
				case 'b':
					printf("Area of cone=\n");
					printf("Enter the value of r=");
					scanf("%d",&r);
					printf("Enter the value of l=");
					scanf("%d",&l);
					res=3.145*r*l;
					printf("res is=%d",res);
					break;
				case 'c':
					printf("Area of cylinder=\n");
					printf("Enter the value of r=");
					scanf("%d",&r);
					printf("Enter the value of h=");
					scanf("%d",&h);
					res=2*3.145*r*h;
					printf("res is=%d",res);
					break;
				case 'd':
					printf("Area of tringle=\n");
					printf("Enter the value of b=\n");
					scanf("%d",&b);
					printf("Enter the value of h=\n");
					scanf("%d",&h);
					res=1/2*b*h;
					printf("res is=%d",res);
					break;
				case 'e':
					printf("Area of circle=\n");
					printf("Enter the value of r");
					scanf("%d",&r);
					res=3.145*r*r;
					printf("res is=%d",res);
					break;
				default:
					printf("Invalid your choice");
					break;
			}
			break;
	}
}
