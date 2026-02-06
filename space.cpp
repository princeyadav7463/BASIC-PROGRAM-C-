#include<stdio.h>
int is_space(char);
int main()
{
	char ch;
	printf("Enter any alphabet=");
	ch = getchar();
	if(is_space(ch))
	{
		printf("%c is space alphabet", ch);
	}
	else
	{
		printf("%c is not space alphabet", ch);
	}
	return 0;
}
int is_space(char c)
{
	if(c==32)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
