#include<stdio.h>
int main()
{
        int n=0x1234;
	n=((n & 0xF000) >>8)|(n & 0x0F00)|((n & 0x00F0)<<8)|(n & 0x000F); 
        printf("%X \n",n);
}
