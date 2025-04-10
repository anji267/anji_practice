#include<stdio.h>
void swap(int *x,int *y)
{
	int t;
        t= *x;
	*x = *y;
	*y = t;
	}
int main()
{
	int a,b;
	printf( "enter the  values : \n");
	scanf("%d%d",&a,&b);
	printf("the original values are : %d \t %d \n",a,b);
	swap(&a,&b);
	printf("the swapped values are : %d \t %d \n",a,b);
}

