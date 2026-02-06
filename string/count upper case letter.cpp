#include<stdio.h>
int main()
{
	char s[]="Prince YADAV'\0'";
	int i,c=0;
	for(i=0;s[i]!=0;i++)
	{
		if(s[i]>=65&&s[i]<=90)
		{
			c=c+1;
		}
	}
	printf("total upper case letter=%d",c);
	return 0;
}
