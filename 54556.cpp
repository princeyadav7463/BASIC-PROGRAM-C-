#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
	char c;
	printf("Enter any character=");
	c=getch();
	if(isspace(c))
	{
		printf("%c is space value",c);
	}
	else
	{
		printf("%c is not space value",c);
	}
	return 0;
}
