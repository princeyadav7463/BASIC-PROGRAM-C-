#include<stdio.h>
#include<stdlib.h>
int main()
{
	int choice2;
	
		float x,y,res;		
	   while(1)
	   {
	   
	   printf("\n===basic calculator===\n");
	   printf("1.add\n");
	   printf("2.sub\n");
	   printf("3.multi\n");
	   printf("4.div\n");
	   printf("0.exit\n");
	   printf(".....................\n");
	   printf("enter your choice=");
	   scanf("%d",&choice2);
	   if(choice2==1)
	   {
	     printf("enter first number=");
		 scanf("%f",&x);
		 printf("enter second number=");
		 scanf("%f",&y);
		 res=x+y;
		 printf("add=%f",res);
		 	
	   }
	   else if(choice2==2)
	   {
	   	printf("enter first number=");
	   	scanf("%f",&x);
	   	printf("enter second number=");
	   	scanf("%f",&y);
	   	res=x-y,res;
	   	printf("sub=%f",res);
	    }
	    else if(choice2==3)
		{
		 printf("enter first number=");
	     scanf("%f",&x);
		 printf("enter second number=");
		 scanf("%f",&y);
	     res=x*y,res;
		 printf("multi=%f",res);
        }
        
		else if(choice2==4)
		{
			printf("enter first number=");
			scanf("%f",&x);
			printf("enter second number=");
			scanf("%f",&y);
			res=x/y,res;
			printf("div=%f",res);
			
		}
		else if(choice2==0){
			exit(0);
		}else{
			printf("Please enter valid choice....\n");
		}
	}
	return 0;
}
