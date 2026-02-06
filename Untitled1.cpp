#include<stdio.h>
#include<conio.h>
int main()
{
	int c;
	printf("Enter any character=");
	c=getch();
	if(c>=65&&c<=90||c>=97&&c<=122)
	{
		printf("%c is alphabet",c);
	}
	else
	{
		putch(c);
		printf("  is not alphabets");
	}
}
