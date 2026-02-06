#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	printf("Enter any string s1=");
	gets(s1);
	printf("Enter any string s2=");
	gets(s2);
	strcat(s1,s2);
	printf("merge string =%s",s1);
	return 0;
}
