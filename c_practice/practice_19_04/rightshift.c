#include<stdio.h>
int main()
{
        int num,position;
        printf("enter the number : \n");
        scanf("%d",&num);
        printf("enter the position: \n");
        scanf("%d",&position);
        printf("the original number is :%d \n",num);
        num = (num>>position);
        printf("the position of number after right shift is : %d \n",num);
}
