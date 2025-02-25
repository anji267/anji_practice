#include<stdio.h>
int main()
{
	int n=122,p1=4,p2=5,p3=6;
	n^=(1<<p1)^(1<<p2)^(1<<p3);
	printf("the final tesult is : %d \n",n);
	return 0;
}
