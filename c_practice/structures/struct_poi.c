#include<stdio.h>
struct a
{
	int x;
	int y;
};
int main()
{
	struct a l = {10,5};
	struct a *ptr = &l;
	printf("the values are : %d \t %d \n",ptr -> x,ptr -> y);
}

