#include<stdio.h>
int main()
{
	int num,toggle_bit;
	printf("enter the num,toggle_bit:\n");
	scanf("%d%d",&num,&toggle_bit);
	num^=(1<<toggle_bit);
	printf("the result of toggle_bit is:%d",num);
	return 0;
}
