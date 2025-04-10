#include<stdio.h>
void even(int *b);
void even(int *b)
{
	for(int i=0;i<5;i++)
	{
		if(*(b+i)%2==0)
		{
			printf("the %d  is even \n",b[i]);
		}
		else
		{
			printf("the %d is odd \n",b[i]);
		}
	}
}



int main()
{
	int a[5]={2,4,7,9,5};
	int *p=a;
	even(a);
	return 0;
}


