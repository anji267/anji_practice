#include<stdio.h>
int main()
{
	int n;
	printf("enter the number :\n");
	scanf("%d",&n);
	if(n%5==0){
		printf("the number is divisible  :%d \n",n);
	}
	else
	{
		printf("the number is not divisiblr:%d \n",n);
	}
}
