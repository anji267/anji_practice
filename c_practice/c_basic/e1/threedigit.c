#include<stdio.h>
int main()
{
        int n;
        printf("enter the value : \n");
        scanf("%d",&n);
	if((n>99)&&(n<999))
	{
                printf("the number is three digit :%d \n",n);
        }
        else
	{
	        printf("the number is not three digit :%d \n",n);
	}
}

