#include<stdio.h>
int main()
{
	int n;
	printf("Enter your choice=");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("Red");
			break;
		case 2:
			printf("Black");
			break;
		case 3:
			printf("yellow");
			break;
		case 4:
			printf("Green");
			break;
		case 5:
			printf("White");
			break;
		case 6:
			printf("Orange");
			break;
		case 7:
			printf("Blue");
			break;
		case 8:
			printf("Golden");
			break;
		case 9:
			printf("Marron");
			break;
		case 10:
			printf("Gray");
			break;
		case 11:
			printf("pink");
			break;
		case 12:
			printf("Purple");
			break;
		case 13:
			printf("Violet");
			break;
		case 14:
			printf("dark blue");
			break;
		case 15:
			printf("Navy");
			break;
		case 16:
			printf("Silver");
			break;
		case 17:
			printf("Chocolate");
			break;
		default:
			printf("Invalid your choice");
			break;
	}
	return 0;
}
