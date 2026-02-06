#include<stdio.h>
#include<ctype.h>
int main()
{
	char s[234];
	int i,upp;
	printf("Enter any string=");
	gets(ch);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='a'&&s[i]=='z')
		{
			upp=toupper(s[i]);
		}
	}
	printf("convert upper case to lower case=%c",upp);
	return 0;
}
