void fun()

#include<stdio.h>
int main()
{
        int n=5,a,b,c,d;
        a=n & 0xF000;
        b= n & 0x0F00;
        c=n & 0x00F0;
        d=n & 0x000F;
        n=(a>>4)|(b<<4)|c|d; 
        printf("%X \n",n);
}