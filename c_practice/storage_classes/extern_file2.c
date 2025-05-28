#include<stdio.h>
extern int a;
int main()
{
	int b=10;
	int c=a+b;
	printf("the sum is : %d\n",c);
	return 0;
}

