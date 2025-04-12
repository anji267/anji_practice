#include<stdio.h>
struct
{
	char  name;
	int age;
	int salary;
}e1,e2,e3;
int manager()
{
	struct
	{
		char name;
		int age;
		int  salary;
	}manager;
	manager.age=27;
	if(manager.age>30)
	
		 manager.salary=65000;
	
	else
	
		 manager.salary=30000;
	return manager.salary;
}
int main()
{
	printf("enter the salary of e1: \n");
	scanf("%d",&e1.salary);
	printf("enter the salary of e2: \n");                                                                 
	scanf("%d",&e2.salary);
	printf("enter the salary of e3: \n");                                                                                                       
	scanf("%d",&e3.salary);
	printf("\n");
	printf("the e1 salary is : %d \n",e1.salary);
	printf("the e2 salary is : %d \n",e2.salary);
	printf("the e3 salary is : %d \n",e3.salary);
	printf("the salary of manager is : %d \n",manager());
}

