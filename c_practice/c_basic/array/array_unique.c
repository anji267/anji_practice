#include<stdio.h>
int main()
{
	int n;
	printf("enter the size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("enter the values in array: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		int count=0;
		for(int j=0;j<n;j++)

		{
			if(a[i]==a[j])
			{

				count++;
			}
		}
		if(count==1)
		{
			printf("the unique elements are: %d \n",a[i]);
		}
	}
	printf("\n");

}


