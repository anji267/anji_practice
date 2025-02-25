#include<stdio.h>
int main()
{
	int n=122,p1=2,p2=3;
	n&= (1<<p1) & (1<<p2) ;
	printf("the final result is : %d",n);
	return 0;
}
