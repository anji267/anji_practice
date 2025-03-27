#include<stdio.h>
int main()
{
	int num;
	printf("enter the value : \n");
	scanf("%d",&num);
	if(num&1==1)
	{
		printf("the number is odd : %d \n",num);
	}
	else
	{
		printf("the number is even : %d \n",num);
	}
}

