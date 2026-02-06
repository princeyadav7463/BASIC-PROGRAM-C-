#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	printf("Enter any string=");
	gets(s1);
	strcpy(s2,s1);
	printf("copy the value =%s",s2);
	return 0;
}
