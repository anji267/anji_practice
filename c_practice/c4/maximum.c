#include<stdio.h>
int main()
{
	int a,b,result;
	printf("enter the values: \n");
	scanf("%d%d",&a,&b);
	result = (a>b)?a:b;
	printf("the bigger number is : %d \n",result);
}


