#include<stdio.h>
int is_punct(char);
int main()
{
	char ch;
	printf("Enter any alphabet=");
	ch = getchar();
	if(is_punct(ch))
	{
		printf("%c is symbol ", ch);
	}
	else
	{
		printf("%c is not symbol", ch);
	}
	return 0;
}
int is_punct(char c)
{
	if(!(c>=65 && c<=90||c>=97&&c<=122||c>=47&&c<=58||c==32))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
