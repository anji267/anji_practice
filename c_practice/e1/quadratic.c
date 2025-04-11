#include<stdio.h>
#include<math.h>
int main()
{
        int a,b,c,z=0;
        printf("enter the values : \n");
        scanf("%d%d%d",&a,&b,&c);
	z=(b*b)-(4*a*c);
        if(z>0)
        {
                printf("the number is real and distinct :%d \n",z);
        }
        if(z==0)
        {
                printf("the number is real and equal :%d \n",z);
	}
	if(z<0)
	{
		printf("the number is imaginary : %d \n",z);
        }
}
