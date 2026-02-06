#include<stdio.h>
#include<stdlib.h>

int TOP = -1;
void PUSH(int stack[],int Max,int item)
{
	if(TOP==Max-1)
	{
		printf("Stack is voerflow...\n");
		exit(0);
	}
	TOP=TOP+1;
	stack[TOP]=item;
	printf("%d is inserted...\n",item);
}
int POP(int stack[])
{
	int item;
	if(TOP==-1)
	{
		printf("Stack is umverflow....\n");
		exit(0);
	}
	item=stack[TOP];
	TOP=TOP-1;
	return item;
}
int PEEK(int stack[])
{
	int item;
	if(TOP==-1)
	{
		printf("stack is empty...\n");
		exit(0);
	}
	item=stack[TOP];
	return item;
}
void DISPLAY(int stack[])
{
	int i;
	if(TOP==-1)
	{
		printf("Stack is empty...\n");
	}
	else
	{
		printf("Stack element are=\n");
		for(i=TOP;i>=0;i--)
		{
			printf("%d\t",stack[i]);
		}
		printf("\n");
	}
}
int main()
{
	const int Max=5;
	int stack[Max];
	int choice;
	int item;
	char con;
	printf("========Stack data structure=======\n");
	while(1)
	{
		printf("1.PUSH\n");
		printf("2.POP\n");
		printf("3.PEEK\n");
		printf("4.DISPLAY\n");
		printf("0.EXIT\n");
		printf(".................................\n");
		printf("Enter your choice=");
		scanf("%d",&choice);
		if(choice==1)
		{
			printf("Enter item=");
			scanf("%d",&item);
			PUSH(stack,Max,item);
		}
		else if(choice==2)
		{
			item=POP(stack);
			printf("%d is delete....\n",item);
		}
		else if(choice==3)
		{
			item=PEEK(stack);
			printf("Top most element is %d\n",item);
		}
		else if(choice==4)
		{
			DISPLAY(stack);
		}
		else if(choice==0)
		{
		printf("exit\n");
		}
		else
		{
			printf("Please enter valid choice...\n");
		}
		printf("....................................\n");
	}
	printf("=================THANK YOU===================\n");
	return 0;
}
