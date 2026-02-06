#include<stdio.h>
int is_upper(char);
int is_lower(char);
int main()
{
	char ch;
	printf("Enter any alphabet=");
	ch = getchar();
	if(is_upper(ch))
	{
		printf("%c is an upper case alphabet", ch);
	}
	else if(is_lower(ch))
	{
		printf("%c is a lower case alphabet", ch);
	}
	else
	{
		printf("%c is not an alphabet", ch);
	}
	return 0;
}
int is_upper(char c)
{
	if(c>=65 && c<=90)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int is_lower(char c)
{
	if(c>=97 && c<=122)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}







/***************************/
is_space()
is_digit()
is_alnum()
is_alpha()
is_punct()

find_factorial()
is_armstrong()
is_prime()
is_perfect()
is_palindrome()
o
