#include<stdio.h>
int main()
{
	int num,sum=0,product=1,digit;
	printf("enter the value : \n");
	scanf("%d",&num);
	num= (num<0) ? -num : num;
	if(num==0)
	{
		sum=0;
		product=0;
	}
	else
	{
		while(num>0)
		{
			digit =num % 10; // extracts last digit ex:1023 it extracts 3
			sum = sum + digit; // 0 + 3
			product = product * digit ;// 1 * 3
			num = num / 10; // removes last digit so it becomes 102
		}
	}
	printf("the sum of digits is : %d \n ",sum);
	printf(" the product of digits is : %d \n ",product);
}


