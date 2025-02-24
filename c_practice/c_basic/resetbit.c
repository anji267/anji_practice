#include<stdio.h>
int main()
{
	int num,reset_bit;
	printf("enter the num,reset_bit :\n");
	scanf("%d%d",&num,&reset_bit);
	num &=~(1<<reset_bit);
	printf("the reset_bit is:%d \n",num);
	return 0;
}
