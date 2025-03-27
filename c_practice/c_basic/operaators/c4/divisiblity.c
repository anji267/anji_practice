#include<stdio.h>
int main()
{
	int num;
	printf("enter the number : \n");
	scanf("%d",&num);
	if((num%5==0)&&(num%11==0))
	{
		printf("the number is divisible by both 5 and 11 : %d \n",num);
	}
	else if(num%5==0)
	{
		printf("the number is divisible by  5 only : %d \n",num);
	}
	else if(num%11==0)
	{
		printf("the number is divisible by 11 only  : %d \n",num);
	}

}

