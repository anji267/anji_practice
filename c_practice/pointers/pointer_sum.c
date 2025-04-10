#include<stdio.h>
void sum(int *x,int *y)
{
	*x + *y;
}
int main()
{
	int a,b;
	printf("enter the values : \n");
	scanf("%d%d",&a,&b);
	sum(&a,&b);
	printf("the sum of values is : %d \n",a+b);
}

