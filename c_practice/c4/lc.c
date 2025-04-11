#include<stdio.h>
int fungcd(int a,int b)
{
	while(b !=0)
        {
                int c = a%b;   // 33 % 12 = 9
                a=b; // a=12
                b=c; // b=9

        }
        return a;
}
int main()
{
	int a,b;
	printf("enter the values : \n");
        scanf("%d%d",&a,&b);
	int gcd = fungcd(a,b);
	int lcm = (a*b)/gcd;
	printf("the value of lcm is : %d \n",lcm);
}

