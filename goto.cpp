#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int a,b,p,choice;
	char c;
	prince:
	printf("1 Add\n");
	printf("2 Sub\n");
	printf("3 Mult\n");
	printf("4 div\n");
	printf("5 Exit\n");
	printf("Enter your choice[1-5]\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Enter two integer number=");
         	scanf("%d%d",&a,&b);
			p=a+b;
			printf("\n sum of two number=%d",p);
			break;
		case 2:
			printf("Enter two intiger number=");
         	scanf("%d%d",&a,&b);
			p=a-b;
			printf("\n sub of two number=%d",p);
			break;
		case 3:
			printf("Enter two intiger number=");
           	scanf("%d%d",&a,&b);
	    	c=a*b;
			printf("\n mult of two number=%d",c);
			break;
		case 4:
			printf("Enter two intiger number=");
          	scanf("%d%d",&a,&b);
		    p=a/b;
			printf("\n div of two number=%d",p);
			break;
		case 5:exit(0);
		default:
			printf("\n Wrong choice");
	    }
    	printf("\n do you want to countinue[y/n]=");
		c=getche();  
			if(c=='Y'||c=='y')
			
			goto prince ;
    	
        getch();
}
