#include<stdio.h>
int main()
{
        int number;
        printf("enter the number : \n");
        scanf("%d",&number);
	number = number>>(sizeof(number)*8-1);
        if((number&1)==0)//if(number==0)
        printf("the number is positive \n");
	else
		printf("the number is negative \n");

}
