#include<stdio.h>
int main()
{
        float gross,basic_salary,rent,expense;
        printf("entr the values : ");
        scanf("%f",&basic_salary);
	rent=0.8 * basic_salary;
	expense= 0.10 * basic_salary;
	gross=basic_salary + rent + expense;
	printf("the gross salary is : %f \n",gross);
}

