#include<stdio.h>
int main()
{
	int num;
	printf("enter the value : \n");
	scanf("%d",&num);
	if(num & 1)
	{
		printf("the number is odd");
	}
	else
	{
		printf("the number is even");
	}
}

