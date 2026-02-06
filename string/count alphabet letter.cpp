#include<stdio.h>
int main()
{
	char s[]="Prince yadav ji @2342'\0'";
	int i,c=0;
	for(i=0;s[i]!=0;i++)
	{
		if(s[i]>=65&&s[i]<=90||s[i]>=97&&s[i]<=122)
		{
			c=c+1;
		}
	}
	printf("count total alphabet letter=%d",c);
	return 0;
}
