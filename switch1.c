#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	char c;
	printf("subject\n");
	printf("Enter your choice=\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("Science\n");
			printf("Enter your choice=\n");
			fflush(stdin);
			scanf("%c",&c);
			switch(c)
				{
					case 'a':
				
			    		printf("Physics");
						break;
					case 'b':
						printf("chemistry");
						break;
					case 'c':
						printf("Biology");
						break;
					defualt:
						printf("Invalide your choice");
						break;
				}
			break;	
		case 2:
		    printf("Commerce\n");
			printf("Enter your choice=\n");
			fflush(stdin);
			scanf("%c",&c);
			switch(c)
			{
				case 'a':
					printf("Account\n");
					break;
				case 'b':
					printf("B T S");
					break;
				case 'c':
					printf("B M T");
					break;
				default:
					printf("Invalid your choice");
					break;
			}
	     	break;	
		case 3:
		    printf("Arts\n");
			printf("Enter your choice=\n");
			fflush(stdin);
			scanf("%c",&c);
			switch(c)
			{
				case 'a':
					printf("Hindi");
					break;
				case 'b':
					printf("English");
					break;
				case 'c':
					printf("Poltical science");
					break;
				default:
					printf("Invalid your choice");
					break;
		    }
		   break; 
		default:
		    printf("Invalide your choice");
			break;  	 		
	}
	return 0;
}
