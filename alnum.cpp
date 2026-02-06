#include<stdio.h>
int is_alnum(char);
int main()
{
	char ch;
	printf("Enter any alphabet=");
	ch = getchar();
	if(is_alnum(ch))
	{
		printf("%c is an alnum case alphabet", ch);
	}
	else
	{
		printf("%c is not an alnum alphabet", ch);
	}
	return 0;
}
int is_alnum(char c)
{
	if(c>=65 && c<=90||c>=97&&c<=122||c>=47&&c<=58)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
