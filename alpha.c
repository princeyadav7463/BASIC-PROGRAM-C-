#include<stdio.h>
int is_alpha(char);
int main()
{
	char ch;
	printf("Enter any alphabet=");
	ch = getchar();
	if(is_alpha(ch))
	{
		printf("%c is an  case alphabet", ch);
	}
	else
	{
		printf("%c is not an  alphabet", ch);
	}
	return 0;
}
int is_alpha(char c)
{
	if(c>=65 && c<=90||c>=97&&c<=122)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
