#include<stdio.h>
int main()
{
	char n;
	printf("Enter your choice=");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:
			printf("male");
			break;
		case 2:
			printf("female");
			break;
		case 3:
			printf("transgender");
			break;
		default:
			printf("Invalid your choice");
			break;
	}
	return 0;
}
