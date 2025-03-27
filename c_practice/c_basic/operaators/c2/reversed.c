#include<stdio.h>
int main()
{
	int num,reversed=0,digit;
	printf("enter the number : \n");
	scanf("%d",&num);
	num = (num<0) ? -num : num;
	if(num!=0)
	{
		while(num>0)
		{
			digit = num % 10;
			reversed = digit + reversed*10;
			num = num /10 ;
		}
	printf("the reversed number is : %d ",reversed);
	}
}


