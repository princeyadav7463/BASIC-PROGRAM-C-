#include<stdio.h>
int is_space(char);
int main()
{
	char ch;
	printf("Enter ant character=");
	ch=getchar();
	if(is_space(ch))
	{
		printf("%c is space character=",ch);
	}
	else
	{
		printf("%c is not space character",ch);
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
