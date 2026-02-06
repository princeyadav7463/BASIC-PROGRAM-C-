#include<stdio.h>
#include<stdlib.h>

//Global variables
int FRONT = -1;
int REAR = -1;

void cqueue_insert(int cqueue[], int MAX, int item)
{
	if( (FRONT==0 && REAR==MAX-1) || (FRONT==REAR+1))
	{
		printf("Circular queue is full..\n");
		exit(0);
	}
	
	if(FRONT==-1 && REAR==-1)
	{
		FRONT=0;
		REAR=0;
	}
	else if(REAR==MAX-1)
	{
		REAR = 0;
	}
	else
	{
		REAR = REAR + 1;
	}
	cqueue[REAR] = item;
	printf("%d is inserted...\n", item);
	
}

int cqueue_delete(int cqueue[], int MAX)
{
	int item;
	if(FRONT==-1 && REAR==-1)
	{
		printf("Circular queue is empty..\n");
		exit(0);
	}
	
	item = cqueue[FRONT];
	if(FRONT==REAR)
	{
		FRONT=-1;
		REAR=-1;
	}
	else if(FRONT==MAX-1)
	{
		FRONT=0;
	}
	else
	{
		FRONT = FRONT + 1;
	}
	
	return item;
	
}
void cqueue_display(int cqueue[], int MAX)
{
	int i;
	if(FRONT==-1 && REAR==-1)
	{
		printf("Circular queue is empty..\n");
		exit(0);
	}
	
	printf("Circular queue elements are:\n");
	if(FRONT<=REAR)
	{
		for(i=FRONT;i<=REAR;i++)
		{
			printf("%d\t", cqueue[i]);
		}
	}
	else
	{
		for(i=FRONT; i<MAX;i++)
		{
			printf("%d\t", cqueue[i]);
		}
		for(i=0; i<=REAR; i++)
		{
			printf("%d\t", cqueue[i]);
		}
	}
	printf("\n");
}

int main()
{
	const int MAX = 5;
	int cqueue[MAX];
	
	int item;
	
	int choice;
	
	char ch;
	
	printf("###### Circular Queue Operation #####\n");
    while(1)
	{
		printf("1 ===> INSERT\n");
		printf("2 ===> DELETE\n");
		printf("3 ===> DISPLAY\n");
		printf("0 ===> EXIT\n");	
		printf("-------------------------------------\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		printf("-------------------------------------\n");
		if(choice==1)
		{
			printf("Enter the data:");
			scanf("%d", &item);
			cqueue_insert(cqueue, MAX, item);
		}
		else if(choice==2)
		{
			item = cqueue_delete(cqueue, MAX);
			printf("%d is deleted..\n", item);
		}
		else if(choice==3)
		{
			cqueue_display(cqueue, MAX);
		}
		else if(choice==0)
		{
			printf("Are you sure?[y/n]: ");
			fflush(stdin);
			scanf("%c", &ch);
			if(ch=='Y' || ch=='y')
			{
				break;
			}
		}
		else
		{
			printf("Please enter valid choice..\n");
		}
		printf("-------------------------------------\n");
	}
	
	printf("============ THANK YOU ============\n");
	return 0;	
}
