#include<stdio.h>
int main()
{
	char s[]="Prince YADAV@8374'\0'";
	int i;
	printf("print upper case letter=");
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>=65&&s[i]<=90)
		{
			printf("%c",s[i]);
		}
	}
	return 0;
}
