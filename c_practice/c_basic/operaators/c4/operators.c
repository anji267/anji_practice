#include<stdio.h>
int main()
{
	int num1,num2,AND,OR,XoR;
	printf("enter the values : \n");
	scanf("%d%d",&num1,&num2);
	AND = num1 & num2;
	OR = num1 | num2;
	XoR = num1 ^ num2;
	printf("the AND value is : %d \n",AND);
	printf("the OR value is : %d \n",OR);
	printf("the XoR value is : %d \n",XoR);
}



