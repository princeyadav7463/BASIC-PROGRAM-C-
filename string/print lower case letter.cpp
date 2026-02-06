#include<stdio.h>
int main()
{
	char s[]="pRINCE yadav3242'\0'";
	int i;
	printf("print lower case letter=");
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>=97&&s[i]<=122)
		{
			printf("%c",s[i]);
		}
	}
	return 0;
}
