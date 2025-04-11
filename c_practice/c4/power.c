#include<stdio.h>
int main()
{
	int num;
	printf("enter the number : \n");
	scanf("%d",&num);
	if((num&(num-1))==0)          //ex: num=4  then num-1=3   so 0100 & 0011 = 0 
	{
		printf("the number is power of two : %d  \n",num);
	}
	else
	{
		printf("the number is not power of two : %d  \n",num);
	}
}

