#include<stdio.h>
int is_palindrome(int);
int main()
{
	int n;
	printf("Enter any number=");
	scanf("%d", &n);
	if(is_palindrome(n))
	{
		printf("%d is palindrome", n);
	}
	else
	{
		printf("%d is not palindrome", n);
	}
	return 0;
}

int is_palindrome(int num)
{
	int rev=0, rem, m = num;
	while(num>0)
	{
		rem = num%10;
		rev = rev * 10 +rem;
		num = num/10;
	}
	if(rev==m)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
