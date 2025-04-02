#include<stdio.h>
int main()
{
        int a,b,c,d;
        printf("enter the values of a,b,c,d :\n");
        scanf("%d%d%d%d",&a,&b,&c,&d);
	if((a<b)&&(a<c)&&(a<d))
        {
                printf("the smallest is a %d \n",a);
        }
        else if((b<c)&&(b<a)&&(b<d))
        {
                printf("the smallest is b %d \n",b);
        }
        else if((c<a)&&(c<b)&&(c<d))
        {
                printf("the smallest is c %d \n",c);
        }
	else
	{
		printf("the smallest is d %d \n",d);
	}

        return 0; 
}
