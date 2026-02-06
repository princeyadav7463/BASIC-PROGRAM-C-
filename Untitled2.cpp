#include<stdio.h>
int main()
{
	char c;
	printf("Enter any character =");
	c=getchar();
	if(c>=65&&c<=90)
	{
		printf("%c is an upper case letter",c);
	}
	else
	{
		printf("%c is not an upper case letter",c);
	}
	return 0;
}
