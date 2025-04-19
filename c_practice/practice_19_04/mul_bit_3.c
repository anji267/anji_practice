#include<stdio.h>
int main()
{
        int number;
        printf("this is multipilication of 3 \n");//ex 10 * 3 =20 here 2 = 2^1  10=1010 << 1 + number
        printf("enter the number : \n");
        scanf("%d",&number);
        number=((number<<1) + number);
        printf("the number multiplied by 3 is :%d \n",number);
}
