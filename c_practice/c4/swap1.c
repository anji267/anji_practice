#include<stdio.h>
int main()
{
	int num1,num2;
	printf("enter the values : \n");
	scanf("%d%d",&num1,&num2);
	printf("the original values are : %d %d \n",num1,num2);
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	printf("the swapped values are : %d %d \n",num1,num2);
}




