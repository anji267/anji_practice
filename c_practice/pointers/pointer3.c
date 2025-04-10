#include<stdio.h>
int main()
{
	int a=7,b=5;
	int *p,*q;
	p = &a;
	*q = *p;
	printf("the values are : %d \t %d \n ",*p,*q);

}
