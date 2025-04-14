#include<stdio.h>
struct a
{
	int x;
	int y;
	int z;
};

int main()
{
	struct a var = {.x=9,.y=7,.z=5};
	printf("the values are :%d\t%d\t%d\n",var.x,var.y,var.z);
}


