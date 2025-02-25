#include<stdio.h>
int main()
{
	int num1,num2,num3,set_bit,reset_bit,toggle_bit;
	printf("enter the num1,num2,num3 :\n");
	scanf("%d%d%d",&num1,&num2,&num3);
	printf("enter the bit position of set_bit,reset_bit,toggle_bit : \n");
	scanf("%d%d%d",&set_bit,&reset_bit,&toggle_bit);
	num1 |=(1<<set_bit);
	num2 &=(1<<reset_bit);
	num3 ^=(1<<toggle_bit);
	printf("the final reult is :%d,%d,%d \n",num1,num2,num3);
	return 0;
}
