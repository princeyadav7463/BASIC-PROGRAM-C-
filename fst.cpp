#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5
int iteam, top=-1,s[size];
int manin()
{
	int n;
	char ch;
	void push();
	void pop();
	void display();
	start:
		printf("1.PUSH");
		printf("\n 2.POP");
		printf("\n 3.Display");
		printf("\n 0.Exit");
		printf("\n Enter your choice=");
		scanf("%d",&n);
		switch(n)
		{
			case 1: 
			 	push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 0:
				exit(0);
			default:
				printf("\n wrong choice=");
		}
		printf("\n Do you want to continue(y/n)");
		ch=getch();
		if(ch=='y'||ch=='Y')
		{
			goto start;
		}
	}
		void push()
		{
			if(top==size-1)
			{
				printf("stack is overflow");
			}
			else
			{
				top=top+1;
				printf("\n Enter the elements you want to insert=");
				scanf("%d",&iteam);
				s[top]=iteam;
				printf("\n %d is inserted",iteam);
			}
		}
		void pop()
		{
			if(top==-1)
			{
				printf("stack is underflow ");
			}
			else
			{
				iteam=s[top];
				top=top-1;
				printf("\n %d is deleted",iteam);
			}
		}
		void display()
		{
			int i;
			if(top==-1)
			{
				printf("stack is umverflow");
			}
			else
			{
				for(i=top;i<=0;i--)
				{
					printf("%d",s[i]);
				}
	        } 
	getch();
}
