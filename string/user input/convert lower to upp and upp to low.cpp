#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	char ch[35],upper,lower;
	int i,l;
	printf("Enter any string=");
	gets(ch);
	l=strlen(ch);
	for(i=0;i<l;i++)
	{
		if(ch[i]>='a'&&ch[i]=='z')
		{
			upper=toupper(ch[i]);
			printf("%c",upper);
		}
		if(ch[i]='A'&&ch[i]=='Z')
		{
			lower=tolower(ch[i]);
			printf("%c",lower);
		}
		if(ch[i]==' ')
		{
			printf(" ");
		}
	}
	return 0;
}
