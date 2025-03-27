#include<stdio.h>
int main()
{
        int  a,b,c;
        printf("entr the values : ");
        scanf("%d%d%d",&a,&b,&c);
	if((a>b)&&(a>c))
	{
		printf("the greater is a : %d \n",a);
	}
	else if((b>a)&&(b>c))
	{
		printf("the greater is b : %d \n",b);
	}
	else
	{
		printf("the greater is c : %d  \n",c);
	}
}

