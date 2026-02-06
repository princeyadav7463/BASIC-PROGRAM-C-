#include<stdio.h>
#include<stdlib.h>


//Global Variables
int FRONT = -1;
int REAR = -1;



//Function for insertion operation
void queue_insert(int queue[], int MAX, int item)
{
	if(REAR == MAX-1)
	{
		printf("Queue is full..\n");
		exit(0);
	}
	
	if(FRONT==-1 && REAR==-1)
	{
		FRONT = 0;
		REAR = 0;
	}
	else
	{
		REAR = REAR + 1;
	}
	queue[REAR] = item;
	printf("%d is insertd..\n", item);
	
}


//Functoin for deletion operation
int queue_delete(int queue[])
{
	int item;
	if(FRONT==-1 && REAR ==-1 )
	{
		printf("Queue is empty...\n");
		exit(0);
	}
	
	item = queue[FRONT];
	
	if(FRONT==REAR)
	{
		FRONT = -1;
		REAR = -1;
	}
	else
	{
		FRONT =  FRONT + 1;
	}
	return item;
}

//Function for display operation
void queue_display(int queue[])
{
	int i;
	if(FRONT==-1 && REAR==-1)
	{
		printf("Queue is empty...\n");
		exit(0);
	}
	
	printf("Print elements of queue:\n");
	for(i=FRONT; i<=REAR; i++)
	{
		printf("%d\t", queue[i]);
	}
	printf("\n");
}


int main()
{
	const int MAX = 5;
	int queue[MAX];
	
	int item;
	
	int choice;
char ch;
	
	printf("=========== QUEUE OPERATION ==========\n");
	
	while(1)
	{
		printf("1 ===> INSERT\n");
		printf("2 ===> DELETE\n");
		printf("3 ===> DISPLAY\n");
		printf("0 ===> EXIT\n");
		printf("--------------------------------------\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		printf("--------------------------------------\n");
		if(choice==1)
		{
			printf("Enter Item: ");
			scanf("%d",&item);
			queue_insert(queue, MAX, item);
		}
		else if(choice==2)
		{
			item = queue_delete(queue);
			printf("%d is deleted...\n", item);
		}
		else if(choice==3)
		{
			queue_display(queue);
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
					break;
			}
		else
		{
			printf("Please enter valid choice...\n");		
		}
		printf("--------------------------------------\n");
	
		
	}
	
	printf("============== THANK YOU  ============\n");
	return 0;
}
