#include<stdio.h>
int main()
{
	int a=1,b=2;
	 printf("the original values are : %d\n%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the values are : %d\n%d\n",a,b);
}


