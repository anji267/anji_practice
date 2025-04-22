#include<stdio.h>
int even(int num)
{
	return num%2==0;
		//printf("the number  is even \n");
	//else
	//	printf("the number is odd \n");
}
int main()
{
	int number;
	printf("enter the number : \n");
	scanf("%d",&number);
	if(even(number))
	{
		printf("the number %d is even \n",number);
	}
	else
	{
	printf("the number %d is odd \n",number);
	}	
}
