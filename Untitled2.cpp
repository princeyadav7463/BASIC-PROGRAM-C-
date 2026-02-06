#include<stdio.h>
#include<stdio.h>
int main()
{
	int n,rem,sum=0;
	printf("Enter any number=");
	scanf("%d",n);
	if(n>=0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
    }
    printf("\n sum of digit of =%d",n,sum);
}
