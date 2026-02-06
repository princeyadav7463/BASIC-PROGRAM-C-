#include<stdio.h>
#include<stdlib.h>
int main()
{
	int choice1,choice2;
	float q,total;
printf("*****************HOTEL MENEAGMENT*******************\n");
printf("1.veg food\n");
printf("2.non veg food\n");
printf("3.south indian food\n");
printf("4.indian continantal/n");
printf("0.exit\n");
printf("****************************************************\n");
printf("enter your choice=");
scanf("%d",&choice1);
if(choice1==1)
{
	printf("*********veg food**********\n");
	printf("1.veg soup....................30rs/pl\n");
	printf("2.veg chilli..................40rs/pl\n");
	printf("3.veg roll....................40rs/pl\n");
	printf("4.veg shanghai................50rs/pl\n");
	printf("0.exit\n");
	printf("***************************\n");
	printf("enter your choice=");
	scanf("%d",&choice2);
	if(choice2==1)
	{
		printf("enter your quantity=");	
		scanf("%f",&q);
		total=q*30;
		printf("your total bill is=%f",total);
		printf("Thank you for ordaring your is coming soon...");
    }  
    else if(choice2==2)
    {
        printf("enter your quantity=");	
		scanf("%f",&q);
		total=q*40;
		printf("your total bill is=%f",total);
		printf("Thank you for ordaring your is coming soon...");	
	}
	else if(choice2==3)
	{
		printf("enter your quantity=");	
		scanf("%f",&q);
		total=q*40;
		printf("your total bill is=%f",total);
		printf("Thank you for ordaring your is coming soon...");
	}
	else if(choice2==4)
	{
		printf("enter your quantity=");	
		scanf("%f",&q);
		total=q*50;
		printf("your total bill is=%f",total);
		printf("Thank you for ordaring your is coming soon...");
	}
	else if(choice2==0)
	{
		exit(0);,
		
	}
	else 
	{
		printf("plese enter the valid option");
	}
}
else if(choice1==2)
{
	printf("************non veg food**********\n");
	printf("1.chicken chilli................40rs/pl\n");
	printf("2.chicken biryani...............80rs/pl\n");
	printf("3.chicken kabab.................50rs/pl\n");
	printf("4.mix chowmin...................50rs/pl\n");
	printf("0.exit\n");
	printf("***********************************\n");
	printf("enter your choice=");
	scanf("%d",&choice2);
	if(choice2==1)
	{
		printf("enter your quantity=");	
		scanf("%f",&q);
		total=q*40;
		printf("your total bill is=%f",total);
		printf("Thank you for ordaring your is coming soon...");
	}
	else if(choice2==2)
	{
		printf("enter your quantity=");	
		scanf("%f",&q);
		total=q*80;
		printf("your total bill is=%f",total);
		printf("Thank you for ordaring your is coming soon...");
	}
	else if(choice2==3)
	{
		printf("enter your quantity=");	
		scanf("%f",&q);
		total=q*50;
		printf("your total bill is=%f",total);
		printf("Thank you for ordaring your is coming soon...");
	}
	else if(choice2==4)
	{
		printf("enter your quantity=");	
		scanf("%f",&q);
		total=q*50;
		printf("your total bill is=%f",total);
		printf("Thank you for ordaring your is coming soon...");
	}
	else if(choice2==0)
	{
		exit(0);
		
	}
	else
	{
		printf("plese enter the valoid option");
	}
}
else if(choice1==3)
{
	printf("***************south indian food*****************\n");
	printf("1.idali...................20rs/pl\n");
	printf("2.dhosa...................35rs/pl\n");
	printf("3.fry rice................40rs/pl\n");
	printf("4.sambhar.................25rs/pl\n");
	printf("0.exit\n");
	printf("**************************************************\n");
	printf("enter your choice=");
	scanf("%d",&choice2);
     if(choice2==1)
	{
		printf("enter your quantity=");	
		scanf("%f",&q);
		total=q*20;
		printf("your total bill is=%f",total);
		printf("Thank you for ordaring your is coming soon...");
	}
	else if(choice2==2)
	{
		printf("enter your quantity=");	
		scanf("%f",&q);
		total=q*35;
		printf("your total bill is=%f",total);
		printf("Thank you for ordaring your is coming soon...");
	}
	else if(choice2==3)
	{
		printf("enter your quantity=");	
		scanf("%f",&q);
		total=q*40;
		printf("your total bill is=%f",total);
		printf("Thank you for ordaring your is coming soon...");
	}
	else if(choice2==4)
	{
		printf("enter your quantity=");	
		scanf("%f",&q);
		total=q*25;
		printf("your total bill is=%f",total);
		printf("Thank you for ordaring your is coming soon...");
	}
	else if(choice2==0)
	{
		exit(0);
		
	}
	else
	{
		printf("plese enter the valid option");
	}
}
else if(choice1==4)
{
	printf("******************indian continantal*****************\n");
	printf("1.prawn pie......................40rs/pl\n");
	printf("2.sticky toffee pudding..........50rs/pl\n");
	printf("3.paneer steak...................50rs/pl\n");
	printf("4.broccoli baked.................45rs/pl\n");
	printf("0.exit\n");
	printf("******************************************************\n");
	printf("enter your choice=");
	scanf("%d",&choice2);
	 if(choice2==1)
	{
		printf("enter your quantity=");	
		scanf("%f",&q);
		total=q*40;
		printf("your total bill is=%f",total);
		printf("Thank you for ordaring your is coming soon...");
	}
	else if(choice2==2)
	{
		printf("enter your quantity=");	
		scanf("%f",&q);
		total=q*50;
		printf("your total bill is=%f",total);
		printf("Thank you for ordaring your is coming soon...");
	}
	else if(choice2==3)
	{
		printf("enter your quantity=");	
		scanf("%f",&q);
		total=q*50;
		printf("your total bill is=%f",total);
		printf("Thank you for ordaring your is coming soon...");
	}
	else if(choice2==4)
	{
		printf("enter your quantity=");	
		scanf("%f",&q);
		total=q*45;
		printf("your total bill is=%f",total);
		printf("Thank you for ordaring your is coming soon...");
	}
	else if(choice2==0)
	{
		exit(0);
	}
	else
	{
		printf("plese enter the valid option");
	}
}
else if(choice1==0)
{
	exit(0);
}
else
{
	
		printf("plese enter the valid option");
	
}
}
