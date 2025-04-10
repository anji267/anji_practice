#include<stdio.h>
int main()
{
	int number;
	printf("enter the number : \n");
	scanf("%d",&number);
	int *n=&number;
	if( *n%2==0)
	{
		printf("the %d is even \n" ,*n);
	}
	else
	{
		printf("the %d is odd \n",*n);
	}

}

