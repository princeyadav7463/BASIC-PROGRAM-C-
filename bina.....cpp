#include<stdio.h>
int main()
{
	float a,b,centigrade,fahrenheit;
	int x;
	printf("1.For Fahrenheit to Celsious=\n");
	printf("2.For Celsisus to Fahrenheit=\n");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
			printf("Enter the value of fahrenheit =\n");
			scanf("%f",&a);
			centigrade=5*(a-32)/9;
			printf("\n Celsious Temperature %f",centigrade);
			break;
		case 2:
			printf("Enter the value of Cecsious =\n");
			scanf("%d",&b);
			fahrenheit=((9*b)/5)+32;
			printf("\n Fahrenheit Temperature %f",fahrenheit);
			break;
		defualt :
			printf("\n Wrong choice please try again!!\n");
	}
	return 0;
}
