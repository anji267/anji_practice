#include<stdio.h>
int main()
{
	int num1,num2,or,and,xor;
	printf("enter the values : ");
	scanf("%d%d",&num1,&num2);
	or = num1 | num2;
	and = num1 & num2;
        xor = num1 ^ num2;
printf("the value of or is: %d \n ",or);
printf("the value of and is : %d \n",and);
printf("the value of xor is : %d \n", xor);
}


