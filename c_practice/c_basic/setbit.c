#include<stdio.h>
int main()
{
	int num,set_bit;
	printf("enter the num,set_bit :\n");
	scanf("%d%d",&num,&set_bit);
	num |=(1<<set_bit);
	printf("the setbit is : %d \n",num);
	return 0;

}
