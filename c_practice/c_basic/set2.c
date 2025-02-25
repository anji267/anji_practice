#include<stdio.h>
int main()
{
	int num=123,p1=5,p2=4;
	num |=(1<<p1)|(1<<p2);
	printf("the final output is : %d \n",num);
	return 0;
}
