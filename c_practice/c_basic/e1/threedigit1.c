#include<stdio.h>
int main()
{
        int n,count=0;
        printf("enter the value : \n");
        scanf("%d",&n);
        while(n>0)
        {
		n=n/10;
		count ++;
	}
	if(count==3)
	{
                printf("the number is three digit :%d \n",n);
        }
        else
        {
                printf("the number is not three digit :%d \n",n);
        }
}
