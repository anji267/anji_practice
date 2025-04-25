#include<stdio.h>
typedef struct students
{
        char name[20];
        int age;
        float marks;
}ss;
int main()
{
	int n,i;
	printf("enter the number of students : \n");
	scanf("%d",&n);
        ss students[n];
	printf("Enter the details of students : \n");
	printf("Enter the name of students : \n");
	for(i=0;i<n;i++)
	{
	scanf("%s",students[i].name);
	}
	printf("enter the age of students : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&students[i].age);
	}
	printf("enter the marks of students : \n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&students[i].marks);
	}
	printf("The details of students are : \n");
	for(i=0;i<n;i++)
	{
	printf("The name of student %d is : %s\t",i+1,students[i].name);
        printf("Age Is : %d \t",students[i].age);
	printf("Marks are : %f \t",students[i].marks);
printf("\n");
	}
}
