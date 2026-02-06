#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char s[100];
	int i,count=0;
	char ch;
	printf("Enter any String=");
	gets(s);
	printf("Enter any character=");
	ch = getchar();
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==ch)
		{
			count=count+1;
		}
	}
	printf("frequency of %c is=%d",ch,count);
	return 0;
}
