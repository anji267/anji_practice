#include<stdio.h>
int main()
{
        int num,position;
        printf("enter the number : \n");
        scanf("%d",&num);
        printf("enter the position: \n");
        scanf("%d",&position);
        printf("the original number is :%d \n",num);
        num=(num^ (1<<position));
        printf("the number after toggling bit is : %d \n",num);
}
