#include<stdio.h>
int main()
{
        int num,pos_1,pos_2;
        printf("enter the number : \n");
        scanf("%d",&num);
        printf("enter the position 1: \n");
        scanf("%d",&pos_1);
        printf("enter the position 2: \n");
        scanf("%d",&pos_2);
        printf("the original number is :%d \n",num);
        num = num&(~((1<<pos_1)|(1<<pos_2)));
        printf("the number after toggling bit is : %d \n",num);
}
