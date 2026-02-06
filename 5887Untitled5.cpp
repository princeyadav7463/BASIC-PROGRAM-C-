#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
	char c;
	printf("Enter any ascii value=");
	c=getch();
	if(isascii(c))
	{
		printf("%c is ascii value",c);
	}
	else 
	{
		printf("%c is not ascii value",c);
	}
	return 0;
}
