#include<stdio.h>
int main()
{
	char s[]="Prince@1234'\0'";
	int i,c=0;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>=47&&s[i]<=58)
		{
			c=c+1;
		}
	}
	printf("count total digit number=%d",c);
	return 0;
}
