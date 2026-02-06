#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char s[10],s2[20];
	
	printf("Enter string = ");
	gets(s);
	strcpy(s2,s);
	printf("copy string = %s",s2);
	return 0;
}

