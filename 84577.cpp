#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
	int n;
	printf("Enter ant digits=");
	n=getch();
	if(isdigit(n))
	{
		printf("%d is digits",n);
	}
	else
	{
		printf("%d is not digits",n);
	}
	return 0;
}
