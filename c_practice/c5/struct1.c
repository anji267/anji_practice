#include<stdio.h>
struct students
{
	char name[20];
	int age;
	float marks;
};
int main()
{
	struct students s1,s2;
	printf("Enter the Details of students: \n");
	printf("Enter the name of student 1: \n");
	scanf("%s",s1.name);
	printf("Enter the age of student 1: \n");
        scanf("%d",&s1.age);
	printf("Enter the marks of student 1: \n");
        scanf("%f",&s1.marks);
	printf("enter the name of student 2: \n");
        scanf("%s",s2.name);
       	printf("Enter the age of student 2: \n");
        scanf("%d",&s2.age);
	printf("Enter the marks of student 2: \n");
        scanf("%f",&s2.marks);
	printf("The Details Of Students Are : \n");
	printf("The name of student 1 is : %s \n",s1.name);
        printf("The age of student 1 is:%d \n",s1.age);
        printf("The marks of student 1 is : %f\n",s1.marks);
        printf("The name of student 2 is: %s \n",s2.name);
	printf("The age of student 2 is : %d \n",s2.age);
	printf("The marks of student 2 is : %f \n",s2.marks);
}

