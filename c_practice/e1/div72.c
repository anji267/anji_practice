#include<stdio.h>
int main()
{
        int n;
        printf("enter the value : \n");
        scanf("%d",&n);
	if((n%7==0)&&(n%3==0))
	{
                printf("the number divisible by 7 and 3  :%d \n",n);

        }
	else if(n%3==0)
        {
                printf("the number is divisible by 3 :%d \n",n);

        }
	else if(n%7==0)
	{
		printf("the number is divisible by 7 : %d \n",n);
	}
}
