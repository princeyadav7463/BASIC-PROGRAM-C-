#include<stdio.h>
int main()
{
	char s[]="Prince yadav@123'\0'";
	int i,c=0;
	for(i=0;s[i]!=0;i++)
	{
		if(s[i]>=97&&s[i]<=122)
		{
			c=c+1;
		}
	}
	printf("total count of lower case letter=%d",c);
	return 0;
}
