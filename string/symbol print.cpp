#include<stdio.h>
int main()
{
	char s[]="prince3 233*%#@_)(@*$*)'\0'";
	int i;
	printf("print symbol =");
	for(i=0;s[i]!='\0';i++)
	{
		if(!(s[i]>=65&&s[i]<=90||s[i]>=97&&s[i]<=122||s[i]==32||s[i]>=47&&s[i]<=58))
		{
			printf("%c",s[i]);
		}
	}
	return 0;
}
