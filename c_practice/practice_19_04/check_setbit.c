#include<stdio.h>
int main()
{
        int number,position;
        printf("enter the number : \n");
        scanf("%d",&number);
        printf("enter the position : \n");
        scanf("%d",&position);
        number=(number>>position)&1;
	if(number==1)
		printf("the number is set bit \n");
	else
		printf("the number is not set bit \n");

}
