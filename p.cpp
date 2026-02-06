#include<stdio.h>
#include<stdlib.h>

int TOP=-1;
void PUSH(int s[], int max,int item)
{
	if(TOP==max-1)
	{
		printf("stack is overflow...\n");
		exit(0);
	}
	TOP=TOP+1;
	s[TOP]=item;
	printf("%d is inserted....\n");
}
int POP(int s[])
{
	int item;
	if(TOP==-1)
	{
		printf("Stack is underflow...\n");
		exit(0);
	}
	item=s[TOP];
	TOP=TOP-1;
	return item;
}
int Peek(int s[])
{
	int item;
	if(TOP==-1)
	{
		printf("Stack is empty..\n");
		exit(0);
	}
	item=s[TOP];
	return item;
}
void display(int s[])
{
	int i;
	if(TOP==-1)
	{
		printf("Stack is empty...\n");
	}
	else
	{
		printf("Stack elements are=\n");
		for(i=TOP;i>=0;i--)
		{
			printf("%d\t",s[i]);
		}
		printf("\n");
	}
}
int main()
{
	const int max=5;
	int s[max];
	int choice;
	int item;
	char con;
	printf("=============Stack data structure ================\n");
	while(1);
	{
		printf("1. PUSH");
		printf("2. POP\n");
		printf("3. Peek\n");
		printf("4. Display\n");
		printf("0.Exit\n");
		printf("----------------------------------------------\n");
		printf("Enter your choice=");
		scanf("%d",&choice);
		if(choice==1)
		{
			printf("Enter item =");
			scanf("%d",&max);
			PUSH(s,max,item);
		}
		else if(choice==2)
		{
			item = POP(s);
			printf("%d is delete...\n",item);
		}
		else if(choice==3)
		{
			item=Peek(s);
			printf("Top most elements is %d\n",item);
		}
		else if(choice==4)
		{
			display(s);
		}
		else if(choice==0)
		{
			printf("Are you sure?[y/n]:");
			fflush(stdin);
			scanf("%c",&con);
			if(con=='y'||con=='Y')
			{
			  
			}
		}
		else
		{
			printf("Please enter valid choice.....\n");
		}
		printf("---------------------------------------\n");
	}
	printf("===================THANK YOU===================\n");
	return 0;
}
