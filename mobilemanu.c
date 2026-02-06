#include<stdio.h>
#include<stdlib.h>
int main()
{
	int choice1,choice2,choice3,choice4,choice5;
	float language;
	mainMenu:
	printf("============================send instructions=====================\n");
	printf("1.Change language\n");
	printf("2.Balance\n");
	printf("3.New offers\n");
	printf("4.My offers\n");
	printf("5.My accounts info\n");
	printf("6.Recharge\n");
	printf("7.Other services\n");
	printf("8.DTH\n");
	printf("9.Payments bank\n");
	printf("0.Next\n");
	printf("...............................\n");
	printf("Enter your choice=");
	scanf("%d",&choice1);
	if(choice1==1)
	{
		languageMenu:
		printf("========================change language=======================\n");
		printf("1.Assamese\n");
		printf("2.Bengali\n");
		printf("3.Hindi\n");
		printf("4.Oriya\n");
		printf("22.Back\n");
		printf("..........................................................\n");
		printf("Enter your choice=");
		scanf("%d",&choice2);
		if(choice2==1)
		{
			printf("**********************Assamese****************************\n");
			printf("thanks you your language is confirm by some seconds late\n");
			printf("22.Back\n");
			printf("Enter your choice=\n");
			scanf("%d",&choice2);
		}
		else if(choice2==2)
		{
			printf("************************Bengali********************************\n");
			printf("thanks you your language is confirm by some seconds late\n");
			printf("22.Back\n");
			printf("Enter your choice=\n");
			scanf("%d",&choice2);
		}
		else if(choice2==3)
		{
			printf("****************************Hindi********************************\n");
			printf("thanks you your language is confirm by some seconds late\n");
			printf("22.Back\n");
			printf("Enter your choice=\n");
			scanf("%d",&choice2);
			if(choice3==22)
			{
				goto languageMenu;
			}
		}
		else if(choice2==4)
		{
			printf("*******************************Oriya********************\n");
			printf("thanks you your language is confirm by some seconds late\n");
			printf("22.Back\n");
			printf("Enter you your choice=\n");
			scanf("%d",&choice2);
			
		}
		else if(choice2==22)
		{
				goto mainMenu;
		}
	}
	else if(choice1==2)
	{
			printf("=============================Balance=====================\n");
			printf("1.Current Pack info\n");
			printf("2.Upcoming Packs info\n");
			printf("3.Other\n");
			printf("22.Back\n");
			printf(".................................................\n");
			printf("Enter your choice=");
			scanf("%d",&choice2);
			if(choice2==1)
			{
				printf("=====================Current pack info==================\n");
				printf("806");
				printf("thank you your current pack is confirm\n");
				printf("0.next\n");
				printf("22.back\n");
				printf(".................................................\n");
				printf("enter your choice=");
				scanf("%d",&choice3);
			}
			else if(choice2==2)
			{
				printf("=================upcoming packs info==========\n");
				printf("*for back\n");
				printf("thank you your choice is conform\n");
				printf("22.back\n");
				printf("...............................................\n");
				printf("enter your choice=");
				scanf("%d",&choice3);
			}
			else if(choice2==3)
			{
				printf("=================================Other=======================\n");
				printf("thank you your choice is conform\n");
				printf("22.back\n");
				printf("............................................\n");
				printf("enter your choice=");
				scanf("%d",&choice3);
			}
			else if(choice2==22)
			{
				printf("================back============\n");
				scanf("%d",&choice3);
			}
			else
			{
				printf("exit");
			}
	}
		else if(choice1==3)
			{
				newoffers:
				printf("===============New offers=======================\n");
				printf("1.MRPWISE_PRODUCTS\n");
				printf("2.SMS packs\n");
				printf("3.ISD packs\n");
				printf("22.Back\n");
				printf(".......................................\n");
				printf("enter your choice=");
				scanf("%d",&choice2);
				printf("thank you your choice is conform\n");
		
			if(choice2==1)
			{
				mrpwise:
				printf("========================MRPWISE_PRODUCTS==============\n");
				printf("1.Unlimited packs\n");
				printf("2.Smart packs\n");
				printf("3.talktime offers\n");
				printf("55.More\n");
				printf("22.Back\n");
				printf("...................................\n");
				printf("enter your choice=");
				scanf("%d",&choice3);
	           
	            
				if(choice3==1)
				{
					printf("=========Unlimited packs==================\n");
					printf("THESE PACKS YOU CAN BUY FROM AIRTEL APP\n");
					printf("1.Rs19=unlimited calls +200MB data for 2days");
					printf("55.more\n");
					printf("22.Back\n");
					printf("..................................\n");
					printf("enter your choice=");
					scanf("%d",&choice4);
					if(choice4==22){
						goto mrpwise;
					}
		     	}
		     	else if(choice3==55)
		     	{
		     		printf("2.Rs 149=Unlimited calls+2GB data+300SMS for 28days\n");
		     		printf("3.rs219=untld calls+1GBdata/days+100SMS/days;28days\n");
		     		printf("98.back\n");
		     		printf("55.more\n");
		     		printf("22.back\n");
		     		printf("............................................\n");
		     		printf("enter your choice=");
		     		scanf("%d",&choice4);
					if(choice4==22){
						goto mrpwise;
					}
	      		}
		     	else if(choice3==2)
		     	{
		     	     printf("========================Smart packs==================\n");
					 printf("22.Back\n");
					 printf("...............................\n");
					 printf("enter your choice=");
					 scanf("%d",&choice4);
					if(choice4==22){
						goto mrpwise;
					}
				}
				else if(choice3==3)
				{
					printf("===========talktime============\n");
					printf("22.back\n");
					printf("................................\n");
					printf("enter your choice=");
					scanf("%d",&choice4);
					if(choice4==22){
						goto mrpwise;
					}
				}
				else if(choice3==55)
				{
					printf("================more======================\n");
					printf("4.Data packs\n");
					printf("5.Sms packs\n");
					printf("98. Back\n");
					printf("22.Back\n");
					printf("....................................\n");
					printf("enter your choice=");
					scanf("%d",&choice4);
					if(choice4==22){
						goto mrpwise;
					}
				}
				else if(choice3==22)
				{
					goto newoffers;
				}
			}
		    if(choice2==4)
			{
				printf("===========================My offers==============================\n");
				printf("22.back\n");
				printf("................................\n");
				printf("enter your choice=");
				scanf("%d",&choice3);
				printf("thank you your choice is conform\n");
			}
				else if(choice2==22)
			{
				printf("================back============\n");
				scanf("%d",&choice3);
			}
			else
			{
				printf("exit");
			}
		}
		        else if(choice1==4)
				{
					printf("=======================my new offers============================\n");
					printf("1.199=UL CL+1.5GB/D,28D\n");
					printf("2.399=UL CL+1.5GB/D,56D\n");
					printf("3.249=UL CL+1.5GB/D,28D\n");
					printf("7.more\n");
					printf("22.back\n");
					printf("...............................\n");
			        printf("Enter your choice=");
		            scanf("%d",&choice2);
		            printf("thank you your choice is conform\n");
			        if(choice2==1)
					{
						printf("==============199=UL CL+1.5GB/D,28D============\n");
						printf("Rs 199=Unlimited call sabhi network par saath hi 1.5GB/din data aur 100SMS/din,28din ke liye.\n");
						printf("9.Home\n");
						printf("22.Back\n");
						printf("...............................\n");
				        printf("Enter your choice=");
			            scanf("%d",&choice3);
			            printf("thank you your choice is conform\n");
			        }
			        else if(choice2==2)
					{
						printf("=======================399=UL CL+1.5GB/D,56D======================\n");
						printf("Rs 399=Unlimited call sabhi network par saath hi 1.5GB/din data aur 100SMS/din,28din ke liye.\n");
						printf("9.Home\n");
						printf("22.Back\n");
						printf("...............................\n");
				        printf("Enter your choice=");
			            scanf("%d",&choice3);
			            printf("thank you your choice is conform\n");
					}
					else if(choice2==3)		
					{
						printf("====================249=UL CL+1.5GB/D,28D==========================\n");
						printf("Rs249=FREE 500MB/din Redeem karein Airtel Thanks App Par Unlimited call sabhi network par 1.5gb aur 100sms/din 28\n");
						printf("9.Home\n");
						printf("22.Back\n");
						printf("...............................\n");
				        printf("Enter your choice=");
			            scanf("%d",&choice3);
			        }
					else if(choice2==7)
					{
					    printf("===========================more=============================\n");
					    printf("1.***************598=ULCL+126GB,84D**********\n");
					    printf("2.***************449=ULCL+2GB/D,56D**********\n");
					    printf("7.More\n");
					    printf("11.back\n");
					    printf("22.Back\n");
					    printf("...............................\n");
				        printf("Enter your choice=");
			            scanf("%d",&choice3);
			    
		              	if(choice3==1)
		              	{
		                	printf("===================598=Unlimited call sabhi network par saath hi 1.5GB/din data aur 100 SMS,84din ke liye\n");
		            	    printf("9.Home\n");
		            	    printf("22.Back\n");
		            	    printf("...............................\n");
			                printf("Enter your choice=");
		            	    scanf("%d",&choice4);
				    	}
				    	else if(choice3==2)
				    	{
						  	printf("Rs339=Unlimited call sabhi network par saath hi 1.5GB/din data aur 100 SMS/in,56din ke liye.\n");
				    	 	printf("9.Home\n");
				    	 	printf("22.Back\n");
				    	 	printf("................................................\n");
				    	 	printf("Enter your choice=");
				    	 	scanf("%d",&choice4);
						}
						else if(choice3==7)
						{
							printf("==========================more======================\n");
							printf("Rs249=FREE 500MB/din Redeem karein Airtel Thanks App par,Unlimited calls sabhi network par,1.5GB/din aur 100SMS/din,28din\n");
							printf("9.Home\n");
							printf("22.Back\n");
							printf("..................................................\n");
							printf("Enter your choice=");
							scanf("%d",choice4);
						}
						else if(choice3==22)
				    	{
					    	printf("================back============\n");
					    	scanf("%d",&choice3);
				     	}
				    	else
				    	{
					     	printf("exit");
				    	}
				    }  
				}
		    else if(choice1==5)
         	{
	    		printf("==================My accounts info==============\n");
		   		printf("1.call rates\n");
		   		printf("2.Deductions\n");
		   		printf("3.data services\n");
		   		printf("22.Back\n");
		   		printf("..............................\n");
		   		printf("Enter your choice=");
		   		scanf("%d",&choice2);
		    	if(choice2==1)
				{
					printf("============call rates=======================\n");
					printf("1.voice rate\n");
					printf("2.SMS rate\n");
					printf("3.Data rate\n");
					printf("22.Back\n");
					printf("........................................\n");
					printf("Enter your choice=");
					scanf("%d",&choice2);
			    
			        if(choice3==1)
		    	    { 
						printf("===========call rates local============\n,A2A RS0.02/1.0SEC\n,A2M RS0.02/1.0SEC\n,A2L RS0.02/1.0SEC\n2");
				        printf("...................................................................\n");
		     	    	scanf("%d",&choice3);
					}
					else if(choice3==2)
					{
				 	    printf("================SMS=================\n");
						printf("=================local==============\n");
						printf("A2A RS.1.00");
						printf("A2M RS.1.00");
				   		printf("================std=================\n");
						printf("A2A RS.1.50");
				 		printf("A2M RS.1.50");
						printf(".........................................\n");
						scanf("%d",&choice3);
					}
					else if(choice3==3)
					{
						printf("=============Data Rates================\n");
						printf("DATA_2G\n");
						printf("RS0.08/10.0Kb\n");
						printf("DATA_4G/3G\n");
						printf("RS0.04/10.0Kb\n");
						printf(".........................................\n");
					    scanf("%d",&choice3);
					}
				}
				else if(choice2==2)
		   	   	{
				    printf("===========================Deductions=========================\n");
					printf("1.Balance Deduction Summary\n");
					printf("2.Last recharge details\n");
					printf("22.Back\n");
					printf("........................................\n");
					printf("Enter your choice=");
					scanf("%d",&choice2);
		    	
		           if(choice3==1)
			       {
			   			printf("=================Balance Deducation summary======================\n");
						printf("you dont have any chargeable deduction in the last 30 days\n");
						printf("22.Back\n");
						printf("................................................................\n");
						printf("Enter your choice=");
						scanf("%d",&choice3);
					}
				    else if(choice3==2)
					{
						printf("==================Last recharge details===================\n");
						printf("Rs.149 on 10-8-2021 13:14\n");
						printf("22.Back\n");
						printf("............................................................\n");
						printf("Enter your choice=");
						scanf("%d",&choice3);
		            }
        		}
        		else if(choice2==3)
            	{
	            	printf("======================data services====================\n");
	            	printf("1.3G\n");
	            	printf("2.4G/3G\n");
	            	printf("3.2G\n");
	            	printf("22.Back\n");
	            	printf(".................................................\n");
	            	printf("Enter your choice=");
	            	scanf("%d",&choice3);
				}
				else if(choice2==22)
		    	{
			    	printf("================back============\n");
			    	scanf("%d",&choice3);
		     	}
		    	else
		    	{
			     	printf("exit");
		    	}
	    	}
		    else if(choice1==6)
		    {
		    	printf("====================Recharge===========================\n");
		    	printf("1.Recharge thought Airtel payments Bank Account\n");
		    	printf("2.Coupon Recharge\n");
		    	printf("22.Back\n");
		    	printf(".........................................................\n");
		    	printf("Enter your choice=");
		    	scanf("%d",&choice2);
			
				if(choice2==1)
				{
					printf("=========================Recharge thought Airtel payments Bank Account=================\n");
					printf("enter amount\n");
					printf("22.Back\n");
					printf("..................................................\n");
					printf("enter your choice=");
					scanf("%d",&choice2);
			    }
			   	else if(choice2==2)
			   	{
					printf("===============Coupon Recharge==============================\n");
					printf("Enter your recharge coupon code\n");
					printf("..............................\n");
					printf("Enter your choice=");
					scanf("%d",&choice2);
				}
			 	else if(choice2==22)
		    	{
			    	printf("================back============\n");
			    	scanf("%d",&choice3);
		     	}
		    	else
		    	{
			     	printf("exit");
		    	}
			}
			else if(choice1==7)
			{
	    		printf("========================Other services====================\n");
	    		printf("1.Broadband Fixedline\n");
	    		printf("2.Start/Stop a service\n");
	    		printf("3.Packs\n");
	    		printf("4.Daily Packs\n");
	    		printf("5.Adavance Talk time\n");
	    		printf("6.Gift talk Packs\n");
	    		printf("7.Roaming Packs\n");
	    		printf("8.Dongle/Data card\n");
	    		printf("0.Next\n");
	    		printf("22.Back\n");
	    		printf("...........................................\n");
	    		printf("Enter your choice=");
	    		scanf("%d",&choice2);
        		if(choice2==1)
        		{
		        		printf("===================Broadband Fixedline================\n");
		        		printf("1.Account Relatiod services\n");
		        		printf("2.Manago Fixedline Services\n");
		        		printf("22.Back\n");
		        		printf("...........................................\n");
		        		printf("Enter your choice=");
		        		scanf("%d",&choice2);
	        		
				    	if(choice3==1)
						{
							printf("==========================Account Relatiod services=======================\n");
							printf("This mobile no.is not registered for your fixed line and broadband connection please call 121 to register.\n");
							printf("22.back\n");
							printf("...............................................................................\n");
							printf("Enter your choice=");
							scanf("%d",&choice3);
						}
						else if(choice3==2)
						{
							printf("======================Manago Fixedline Services==========================\n");
							printf("1.STD\n");
							printf("2.ISD\n");
							printf("3.Pack_voice\n");
							printf("4.Call Watting\n");
							printf("5.Call Conference\n");
							printf("6.Call Forwarding\n");
							printf("7.Dynamic Locking\n");
							printf("8.parrallel Ringing\n");
							printf("9.Start Ebill\n");
							printf("0.NEXT\n");
							printf("22.Back\n");
							printf(".................................\n");
							printf("Enter your choice=");
							scanf("%d",choice4);
					
							if(choice4==1)
							{
								printf("==================STD============================\n");
								printf("Sorry! There are no fixed lines registered against your number\n");
								printf("22.Back\n");
								printf("......................................................\n");
								printf("Enter your choice=");
						    	scanf("%d",choice4);
							}
							else if(choice4==2)
							{
								printf("=================ISD========================\n");
								printf("there is no fixedline account registered with your mobile.To register now,p;ease call 121 from your airtel\n");
								printf("00.Next\n");
								printf("22.Back\n");
								printf("...................................................\n");
								printf("Enter your choice=");
								scanf("%d",&choice4);
							}
							else if(choice4==3)
							{
								printf("==============================Pack_voice===================\n");
								printf("There is no fixedline account registered with your mobile.To register now,please call 121 from your airtel\n");
								printf("00.NEXT\n");
								printf("22 Back\n");
								printf("..............................................................\n");
								printf("Enter your choice=");
								scanf("%d",&choice4);
							}
							else if(choice4==4)
							{
								printf("========================Call Watting==========================\n");
								printf("There is no fixedline account registered with your mobile.To register now,please call 121 from your airtel\n");
								printf("00.NEXT\n");
								printf("22 Back\n");
								printf("................................................\n");
								printf("Enter your choice=");
								scanf("%d",&choice4);
							}
							else if(choice4==5)
							{
								printf("=====================Call Conference====================\n");
								printf("There is no fixedline account registered with your mobile.To register now,please call 121 from your airtel\n");
								printf("00.NEXT\n");
								printf("22 Back\n");
								printf(".........................................................\n");
								printf("Enter your choice=");
								scanf("%d",&choice4);
							}
							else if(choice4==6)
							{
								printf("==============================Call Forwarding=====================\n");
								printf("sorry! You are not eligiblen for the sekected service.Please contact 121 for further details.\n");
								printf("22.Back\n");
								printf("...........................................................\n");
								printf("Enter your choice=");
								scanf("%d",&choice4);
							}
							else if(choice4==7)
							{
								printf("=========================Dynamic Locking===========================\n");
								printf("sorry! You are not eligiblen for the sekected service.Please contact 121 for further details.\n");
								printf("22.Back\n");
								printf("............................................................\n");
								printf("Enter your choice=");
								scanf("%d",&choice4);
							}
							else if(choice4==8)
							{
								printf("=======================parrallel Ringing=========================\n");
								printf("sorry! You are not eligiblen for the sekected service.Please contact 121 for further details.\n");
								printf("22.Back\n");
								printf("...................................................................\n");
								printf("Enter your choice=");
								scanf("%d",&choice4);
							}
							else if(choice4==9)
							{
								printf("=====================================Start Ebill================================\n");
								printf("sorry! You are not eligiblen for the sekected service.Please contact 121 for further details.\n");
								printf("22.Bank\n");
								printf(".............................................................\n");
								printf("Enter your choice=");
								scanf("%d",&choice4);
							}
							else if(choice4==0)
							{
								printf("===========================NEXT======================\n");
								printf("1.start Service\n");
								printf("2.Stop service\n");
								printf("22.Back\n");
								printf("...............................................\n");
								printf("Enter your choice=");
								scanf("%d",&choice4);
					
								if(choice5==1)
								{
									printf("=================================Start service=============================\n");
									printf("Extrnal application down\n");
									printf("22.Back\n");
									printf(".....................................\n");
									printf("Enter your choice=");
									scanf("%d",&choice5);
								}
								else if(choice5==2)
								{
									printf("===========================stop service==========================\n");
									printf("Kindly note there are no services active on your Airtel number.To START a service,SMS START to 121.\n");
									printf("22.Back\n");
									printf("....................................................\n");
									printf("Enter your choice=");
									scanf("%d",&choice5);
								}
							}
						}
				      	else if(choice3==22)
				    	{
					    	printf("================back============\n");
					    	scanf("%d",&choice3);
				     	}
				    	else
				    	{
					     	printf("exit");
				    	}
					}
		
				   if(choice2==2)
				   {
				   	printf("===========================Start/Stop a service=======================\n");
				   	printf("Welcome to Airtel new offers. Reply with option for packs\n");
				   	printf("1.MRPWISE_PRODUCTS\n");
				   	printf("2.SMS Packs\n");
				   	printf("3.ISD Packs\n");
				   	printf("22.Back\n");
				   	printf(".................................................\n");
				   	printf("Enter your choice=");
				   	scanf("%d",&choice3);
					   	
				   if(choice3==1)
				   {
				   	printf("==========================MRP WISE_PRODUCTION==========================\n");
				   	printf("Enter the MRP followed by # for MRPWISE Prouducts (Eg.40#) OR reply with OPTION\n");
				   	printf("1.Unlimited Packs\n");
				   	printf("2.Smart Packs\n");
				   	printf("3.talktime Offers\n");
				   	printf("55.more\n");
				   	printf("22.Back\n");
				   	printf(".............................................\n");
				   	printf("Enter your choice=");
				   	scanf("%d",&choice4);
				   }
				   else if(choice3==2)
				   {
				   	printf("THESE PACKS YOU CAN BUY FROM AIRTEL APP\n");
				   	printf("1.Rs19=Unlimited calls + 200MB data for 2 days\n");
				   	printf("55.More\n");
				   	printf("22.Back\n");
				   	printf("...................................");
				   	printf("Enter your choice=");
				   	scanf("%d",&choice4);
				   }
				}
			}
			
		
			
			
			return 0;
}





			






       

