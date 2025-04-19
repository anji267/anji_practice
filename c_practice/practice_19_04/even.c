#include<stdio.h>
int main()
{
        int number;
        printf("enter the number : \n");
        scanf("%d",&number);

        if((number&1)==0)
	printf("the given %d is even \n",number);
	else
		printf("the given number %d is odd \n",number);
}

        
