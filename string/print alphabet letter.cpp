#include<stdio.h>
int main()
{
	char s[]="Prince yadav(pp)@23421'\0'";
	int i;
	printf("print alphabet letter=");
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>=65&&s[i]<=90||s[i]>=97&&s[i]<=122)
		{
			printf("%c",s[i]);
		}
	}
	return 0;
}
