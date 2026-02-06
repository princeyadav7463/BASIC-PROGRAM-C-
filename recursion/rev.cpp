#include<stdio.h>
int sum=0,rem;
int main()
{
	int num,revNum;
	int rev(132);
	printf("revese=%d",revNum);
	
	return 0;
}
int rev(int num)
{
	if(num)
	{
		rem=num%10;
		sum=sum*10+rem;
		revNum(num/10);
	}
	else
	return sum;
}
