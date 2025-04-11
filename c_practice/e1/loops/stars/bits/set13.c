#include<stdio.h>
int main()
{
        int n=0x1234;
	n=(n & 0xF000)|(n & 0x0F00)|(n & 0x00F0)|((n & 0x000F)<<16); 
        printf("%X \n",n);
}
