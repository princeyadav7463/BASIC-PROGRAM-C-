#include<stdio.h>
int is_digit(int);
int main()
{
	int n;
	printf("Enter any digit=");
	scanf("%d",&n);
	if(is_digit(n))
	{
		printf("%d is digit letter",n);
	}
	else
	{
		printf("%d is not digit letter",n);
	}
	return 0;
}
int is_digit(int n)
{
	if(n>=47&&n<=58)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
