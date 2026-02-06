#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
	char c;
	printf("Enter any character=");
	c=getch();
	if(islower(c))
	{
		printf("%c is lower case letter",c);
	}
	else
	{
		printf("%c is not lower case letter",c);
	}
	return 0;
}
