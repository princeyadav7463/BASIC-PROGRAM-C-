#include<stdio.h>
struct Book
{
	char isbno[50];
	char name[50];
	char auther[50];
	float price;
};
int main()
{
	struct Book b={"B23","Java","xyz",400.00};
	printf("======BOOK INFORMATION ========\n");
	printf("isbno=%s\n",b.isbno);
	printf("name=%s\n",b.name);
	printf("auther=%s\n",b.auther);
	printf("price=%s\n",b.price);
	return 0;	
}

