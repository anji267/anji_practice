#include<stdio.h>
int countbit(int num)
{
	int count=0;
	 while(num>0)
        {
                if(num % 2 == 1)
                {
                        count++;
                }
                num=num/2;
	}
	 return count;
}



int main()
{
	int num;
	printf("enter the value:");
	scanf("%d",&num);
	printf("the bits in %d is %d ",num,countbit(num));

}

