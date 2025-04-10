#include<stdio.h>
int main()
{
	int a[7]={1,9,3,2,5,8,6};
	int min,max,i;
	int *ptr=a;
	//ptr = a;
	min = max = *ptr;
	for(i=1;i<7;i++)
	{
		if(min>*(ptr+i))
		{
			min=*(ptr+i);
		}
		if(max<*(ptr+i))
		{
			max=*(ptr+i);
		}
	}
	printf("the smallest is : %d \n the largest is: %d \n",min,max);
}



