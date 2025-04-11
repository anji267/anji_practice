#include<stdio.h>
int main()
{
        int n;
        printf("enter the value : \n");
        scanf("%d",&n);
        if((n%3==0)&&(n%2==0))
        {
                printf("the number is divisible 3 and 2 \n");
        }
	else
        {
                printf("the number is not divisible by 3 and 2 \n");
        }
}
