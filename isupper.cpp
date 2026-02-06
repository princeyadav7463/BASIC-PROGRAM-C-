#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
	char c;
	printf("Enter any character=");
	c=getch();
	if(isupper(c))
	{
		printf("%c is upper case letter",c);
	}
	else
	{
		printf("%c is not upper case letter",c);
	}
	return 0;
}
