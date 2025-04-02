#include<stdio.h>
int powtwo(int num)
{
	return num>0 && (num & (num-1))==0;
}
int main()
{
	int num;
	printf("enter the number: \n");
	scanf("%d",&num);
	if(powtwo(num))
	{
		printf("%d is a power of 2",num);
	}
	else
	{
		printf("%d is not power of 2",num);
	}
}


