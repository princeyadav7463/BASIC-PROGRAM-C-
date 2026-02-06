#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
	char c;
	printf("Enter any symbols=");
	c=getch();
	if(ispunct(c))
	{
		printf("%c is symbols",c);
	}
	else 
	{
		printf("%c is not symbols",c);
	}
	return 0;
}
