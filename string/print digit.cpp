#include<stdio.h>
int main()
{
	char s[]="prince 2e23924'\0";
	int i;
	printf("print digit number=");
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>=48&&s[i]<=58)
		{
			printf("%c",s[i]);
		}
	}
	return 0;
}
