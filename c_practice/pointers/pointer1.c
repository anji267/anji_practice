#include<stdio.h>
int main()
{
	int a=10;
	int *p,*q;
	p=&a;
	q=p;
	printf("the elements are : %d \n  %d \n",*p,*q);
}


