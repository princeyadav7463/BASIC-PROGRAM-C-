#include<stdio.h>
int main()
{
   int rem,rev, m ,sum=0,n;
   printf("Enter any intiger number=");
   scanf("%d",&n);
   m=n;
   while(n!=0)
    {
	rem=n%10;
	sum=10*sum+rem;
	n=n/10;
    }
   printf("Reverse of %d =%d\n",m,sum);
   return 0;
}
