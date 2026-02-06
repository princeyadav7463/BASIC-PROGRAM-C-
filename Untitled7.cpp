#include<stdio.h>
#include<conio.h>
int main()
{
	char c;
	printf("Enter any character=");
	c=getch();
	if(c=='A'&&c=='a'||c=='E'&&c=='e'||c=='I'&&c=='i'||c=='O'&&c=='o'||c=='U'&&c=='u')
	{
		printf("%c is vowel alphabets",c);
	}
	else
	{
		printf("%c is not vowel alphabets",c);
	}
	return 0;
}
