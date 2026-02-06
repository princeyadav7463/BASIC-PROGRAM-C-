/*
Example 1: Array of Structure


#include<stdio.h>
#include<string.h>
struct Student
{
	int rollno;
	char name[50];
};

int main()
{
	struct Student s[3];
	int i;
	s[0].rollno = 100;
	strcpy(s[0].name, "Amit");
	
	s[1].rollno = 101;
	strcpy(s[1].name, "Sumit");
	
	s[2].rollno = 103;
	strcpy(s[2].name, "Anil");
	
	printf("====== Student Information =====\n");
	printf("Rollno\tName\n");
	for(i=0; i<3; i++)
	{
		printf("%d\t%s\n", s[i].rollno, s[i].name);
	}
	
	return 0;
}



Example 2: Array of Structure

#include<stdio.h>
#include<string.h>
struct Student
{
	int rollno;
	char name[50];
};

int main()
{
	struct Student s[3];
	int i;
	printf("Enter Student information:\n");
	for(i=0; i<3; i++)
	{
		printf("Enter %d student info:\n", (i+1));
		printf("Enter rollno: ");
		scanf("%d", &s[i].rollno);
		
		printf("Enter name: ");
		fflush(stdin);
		gets(s[i].name);
	}
	printf("====== Student Information =====\n");
	printf("Rollno\tName\n");
	for(i=0; i<3; i++)
	{
		printf("%d\t%s\n", s[i].rollno, s[i].name);
	}
	
	return 0;
}
