#include<stdio.h>
int main()
{
        int n;
        printf("enter the value : \n");
        scanf("%d",&n);
        if((n%4==0)&&((n%400==0)||(n%100!=0)))
			{
			printf("this is leap year  : %d \n",n);
			}
			else
			{
			printf("this is not leap year  : %d \n",n);
			}
}
