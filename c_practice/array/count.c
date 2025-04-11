#include<stdio.h>
int main()
{
	int n,even=0,odd=0;
	printf("enter the size of array : ");
	scanf("%d",&n);
	int num[n];
	printf("enter the values in array : ");
	for( int i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(num[i]%2==0)
			even++;
		else
			odd++;
	}
	printf("the even numbers in array are : %d \n",even);
	printf("the odd numbers in array are : %d \n",odd);
}

