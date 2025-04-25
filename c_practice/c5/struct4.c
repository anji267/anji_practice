#include<stdio.h>
struct person
{
	char name[20];
	int age;
	float income;
};

int main()
{
	struct person p1={"Anji",21,40000.3412};
	printf("the name is : %s \n",p1.name);
	printf("the age is : %d \n",p1.age);
	printf("the income is : %.2f \n",p1.income);
}

