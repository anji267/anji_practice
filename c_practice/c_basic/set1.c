#include<stdio.h>
int main()
{
	int num=12,p1=6,p2=7;
	num |=(1<<p1)|(1<<p2);
	printf("the output is : %d \n",num);
	return 0;
}
