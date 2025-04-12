#include<stdio.h>
struct student{
	int roll_number;
	float marks;
	char name[30];
}; int s[5];

int main()
{
	struct student s[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("enter the name  : %d \n",i+1);
                scanf("%s",s[i].name);
		printf(" enter the roll number : %d \n",i+1);
		scanf("%d",&s[i].roll_number);
		printf("enter the marks : %d \n",i+1);
		scanf("%f",&s[i].marks);
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("the name is : %s \n",s[i].name);
		printf("the roll number is : %d \n",s[i].roll_number);
		printf("the marks are : %f \n",s[i].marks);
	}
}


