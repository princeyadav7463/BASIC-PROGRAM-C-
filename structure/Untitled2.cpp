#include<stdio.h>
struct Student
{
	char name[50];
	char rollno[50];
	float marks;
	char cls[50];
	
};
int main()
{
	struct student s={"Prince","21B24",342.00,"2"};
	printf("name=%s",s.name);
	printf("rollno=%s",s.rollno);
	printf("marks=%s",s.marks);
	printf("class=%s",s.cls);
	return 0;
}
