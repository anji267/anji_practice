#include<stdio.h>
int main()
{
	int num;
	printf("enter the number : \n");
	scanf("%d",&num);
	if((num&num)==num)
	{
		printf("the system is little endian:  \n");
	}
	else
	{
		printf("the system is big endian \n");
		}
}

