#include<stdio.h>
int main()
{
        int number,position;
        printf("enter the number : \n");
        scanf("%d",&number);
        printf("enter the position : \n");
        scanf("%d",&position);
        number=(number>>position)&1;
        if(number==0)
                printf("the number is reset bit \n");
        else
                printf("the number is not reset bit \n");

}
