#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the values of a,b \n");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the swap of number is: %d  \n",a);
	printf("the swap of number is : %d \n",b);

}

