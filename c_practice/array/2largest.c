#include<stdio.h>
int main()
{
	int n,max,second_max;
	printf("enter the size of array : \n");
	scanf("%d",&n);
	int array[n];
	printf("enter the elements of array : \n" );
	for(int i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("the elements in array are :\n");
	        for(int i=0;i<n;i++)
        {
                printf("%d ",array[i]);
        }
		max=array[0];
		second_max=array[0];
		for(int i=0;i<n;i++)
		{
			if(array[i]>max)
			{
				second_max=max;
				max=array[i];
			}
			else if((array[i]>second_max)&&(array[i]<max))
			{
				second_max=array[i];
			}
		}
		printf("the maximum number is : %d \n",max);
		printf("the second maximum number is : %d \n",second_max);
}

		
