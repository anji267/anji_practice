#include<stdio.h>
int main()
{
	int num,count=0;
	printf("enter the number: \n");
	scanf("%d",&num);
	num= (num<0)?-num:num;
	if(num==0)
	{
		count=1;
	}
	else
	{
		while(num>0)
		{
			num=num/10;
			count++;
		}
	}
	printf("the digits in number is : %d \n ",count);
}


