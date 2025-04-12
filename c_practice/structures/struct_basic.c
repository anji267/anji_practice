#include<stdio.h>
#include<string.h>
typedef struct employee
{
		char name[30];
		int age[10];
		float salary[20];
}e;
int main()
{
	e emp;
	strcpy(emp.name,"anji");
	printf("%s \n",emp.name);
}
