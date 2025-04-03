#include<stdio.h>
int main()
{
	int a[10];
	printf("enter the values of array: ");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int j=0;j<9;j++)
	{
		printf("the elements are:%d",a[j]);
	}
}


