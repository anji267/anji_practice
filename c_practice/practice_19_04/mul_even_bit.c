#include<stdio.h>
int main()
{
	int number;
	printf("this is multipilication of 2 \n");//ex 10 * 2 =20 here 2 = 2^1  10=1010 << 1  
	printf("enter the number : \n");
	scanf("%d",&number);
	number=(number<<1);
	printf("the number multiplied by 2 is :%d \n",number);
}
