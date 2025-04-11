#include<stdio.h>
int main()
{
	int num;
	printf("enter the value : \n");
	scanf("%d",&num);
	if(num>0)
	{
		printf("the number is positive : %d \n",num);
	}
	else if(num<0)
	{
		printf("the number is negative : %d \n",num);
	}
	else if(num==0)
	{
		return 0;
	}
}


