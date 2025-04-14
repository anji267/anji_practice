#include<stdio.h>
union abc
{
	int a;
	char c;
};

int main()
{
	union abc var;
	//var.c=2.25;
	        var.a=35;//latest declared variable will be shown
	union abc *ptr = &var;
	printf("%d\t%c",ptr->a,ptr->c);
}

	

