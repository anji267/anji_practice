#include<stdio.h>
int main()
{
	int x=5;
	int *ptr;
	ptr = &x;
	printf("the value is : %d \n",*ptr);
	*ptr = 100;
	printf("the new value is : %d \n",*ptr);
}

