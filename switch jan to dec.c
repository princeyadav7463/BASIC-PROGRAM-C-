#include<stdio.h>
int main()
{
	int n;
	printf("Enter your choice=");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("january");
			break;
		case 2:
			printf("feburary");
			break;
		case 3:
			printf("March");
			break;
		case 4:
			printf("April");
			break;
		case 5:
			printf("May");
			break;
		case 6:
			printf("June");
			break;
		case 7:
			printf("July");
			break;
		case 8:
			printf("August");
			break;
		case 9:
			printf("September");
			break;
		case 10:
			printf("October");
			break;
		case 11:
			printf("november");
			break;
		case 12:
			printf("December");
			break;
		default:
			printf("Invalide your choice please check your choice");
			break;
	}
	return 0;
}
