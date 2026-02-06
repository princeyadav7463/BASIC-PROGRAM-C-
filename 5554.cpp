#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
	char c, r;
	printf("Enter any upper case letter=");
	c=getchar();
	r = tolower(c);
	printf("%c is convert lower case letter",r);
}
