#include<stdio.h>
union abc
{
	int a;
	char b;
	float c;
}var;
int main()
{
	printf("the values of a is : %d\n",var.a=73);
	printf("the values of b is : %c\n",var.b='6');
	printf("the values of c is : %f\n",var.c=73.565);
	printf("the size of union is : %lu",sizeof(union abc));
}

