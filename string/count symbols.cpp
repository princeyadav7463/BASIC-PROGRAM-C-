#include<stdio.h>
int main()
{
	char s[]="tu mari @3727#@%&%4 HAI 3#&)(&%#%&^*$#@)'\0'";
	int i,count=0;
	for(i=0;s[i]!='\0';i++)
	{
		if(!(s[i]>=65&&s[i]<=90||s[i]>=97&&s[i]<=122||s[i]==32||s[i]>=47&&s[i]<=58))
		{
			count=count+1;
		}
	}
	printf("total number of symbols =%d",count);
	return 0;
}
