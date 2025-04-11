#include <stdio.h>
int main()
{
        int num;
        printf("enter the number : \n");
        scanf("%d",&num);
        if(num%2==0)
	{
		printf("the number is even : %d \n",num);
	}
	else
	{
		printf("the number is odd : %d \n",num);
	}
}
