#include<stdio.h>
int main()
{
	int n,i;
	float sum=0,avg;
	printf("enter the size of array: ");
	scanf("%d",&n);
	int marks[n];
	printf("enter the marks : ");
	for( i=0;i<n;i++)
	{
		scanf("%d",&marks[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum + marks[i];
	}
	avg = sum/n;
	printf("the sum of marks is : %.3f \n",sum);
	printf("the avg is : %.3f \n",avg);
}


