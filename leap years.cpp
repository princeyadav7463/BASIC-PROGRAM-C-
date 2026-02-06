#include<stdio.h>
int main()
{
	int y;
	printf("Enter any years=");
	scanf("%d",&y);
	(y%100==0&&y%400==0&&y%4==0)?printf("Leap years"):printf("NOt leap years");
	return 0;
}
