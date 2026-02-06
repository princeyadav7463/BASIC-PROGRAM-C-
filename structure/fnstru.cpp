//Passsing structure as an argument to the function
//Example: without passing structure as an argument
/*
#include<stdio.h>
struct Book
{
	int id;
	char name[50];
	float price;	
};

int main()
{
	struct Book b1 = {100,"C++", 599};
	struct Book b2 = {102, "C", 499};
	struct Book b3 = {104, "Java", 899};
	
	printf("====== Book Info ==========\n");
	printf("ID: %d\n", b1.id);
	printf("Name: %s\n",b1.name);
	printf("Price: %f\n", b1.price);
	
	printf("-----------------------------\n");
	printf("ID: %d\n", b2.id);
	printf("Name: %s\n",b2.name);
	printf("Price: %.2f\n", b2.price);
	
	printf("-----------------------------\n");
	printf("ID: %d\n", b3.id);
	printf("Name: %s\n",b3.name);
	printf("Price: %.2f\n", b3.price);
	
	return 0;

}

//Example 2:

#include<stdio.h>
struct Book
{
	int id;
	char name[50];
	float price;	
};

void show(struct Book x)
{
	printf("ID: %d\n", x.id);
	printf("Name: %s\n", x.name);
	printf("Price: %.3f\n", x.price);	
}

int main()
{
	struct Book b1 = {100,"C++", 599};
	struct Book b2 = {102, "C", 499};
	struct Book b3 = {104, "Java", 899};
	
	printf("====== Book Info ==========\n");
	show(b1);
	
	printf("-----------------------------\n");
	show(b2);
	
	printf("-----------------------------\n");
	show(b3);
	
	return 0;

}
*/

//Function returing structure.

//Example 1:


#include<stdio.h>
struct Student
{
	int rollno;
	char name[50];
	int cls;	
};

struct Student input()
{
	struct Student s;
	printf("Enter rollno=");
	scanf("%d", &s.rollno);
	
	printf("Enter name=");
	fflush(stdin);
	gets(s.name);
	
	printf("Enter class=");
	scanf("%d", &s.cls);
	
	return s;
	
}
void show(struct Student s)
{
	printf("Rollno: %d\n", s.rollno);
	printf("Name: %s\n", s.name);
	printf("Class: %d\n", s.cls);
}

int main()
{
	struct Student s1, s2, s3;
	printf("Enter First Student Info:\n");
	
	s1 = input();
	
	printf("Enter Second Student Info:\n");
	
	s2 = input();
	
	printf("Enter Third Student Info:\n");
	
	s3 = input();
	
	
	printf("======== Student Info ======\n");
	show(s1);
	printf("----------------------------\n");
	show(s2);
	printf("----------------------------\n");
	show(s3);
	
	return 0;
	
}
