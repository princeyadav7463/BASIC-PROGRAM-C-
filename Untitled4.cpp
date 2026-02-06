#include<stdio.h>
#include<conio.h>
int main()
{
	char c;
	printf("Enter any intiger digits=");
	c=getch();
	if(c>=48&&c<=57)
	{
	putch(c);
	printf(" is intiger digits");
	}
	else
	{
		putch(c);
		printf(" is not intiger digits");
	}
	return 0;
}
