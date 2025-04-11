#include<stdio.h>
int main()
{
	int num,position,result;
	printf("enter the value: \n");
	scanf("%d%d",&num,&position);
	result=num>>position;
	printf("the right shift is : %d \n",result);
}

