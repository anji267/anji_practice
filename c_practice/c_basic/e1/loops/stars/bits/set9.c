#include<stdio.h>
int main()
{
        int n=0x1234;
        n=((n & 0xFF00) >>8) |((n & 0x00FF)<<8);
        printf("%X \n",n);
}
