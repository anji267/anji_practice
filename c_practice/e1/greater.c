#include<stdio.h>
int main()
{
        int a,b;
        printf("enter the value : \n");
        scanf("%d%d",&a,&b);
        if(a==b)
        {
                printf("the number are same :%d %d \n",a,b);
        }
        if(a>b)
        {
                printf("the greater number is a :%d \n",a);
	}
	else 
	{
		printf("the graeter  number is b : %d \n",b);
	}
}
