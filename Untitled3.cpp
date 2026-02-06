#include<stdio.h>
#include<conio.h>
int main()
{
	char c;
	printf("Enter any character=");
	c=getch();
	if(c>=97&&c<=122)
	{
		putch(c);
		printf(" is lower case letter");
 	}
 	else
 	{
 		putch(c);
		 printf(" is not lower case letter");	
	}
	return 0;
}
