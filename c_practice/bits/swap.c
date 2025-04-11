/*#include<stdio.h>
int main()
{
        int n=0x1234;
	n=(n>>4)|((n & 0x000F)<<12); 
        printf("%x \n",n);
}*/
/*
#include<stdio.h>
int main()
{
     short int n=0x1234;
	n=(n<<12)|(n>>4);
        printf("%X \n",n);
}*/
/*
#include<stdio.h>
int main()
{
        int n,a,b,c,d;
        printf("enter the value : \n");
        scanf("%X",&n);
        a=n & 0xF000;
        b= n & 0x0F00;
        c=n & 0x00F0;
        d=n & 0x000F;
	n=(a>>4)|(b>>4)|(c>>4)|(d<<12); 
        printf("%X \n",n);
}
*/



/*
#include<stdio.h>
int main()
{
        int n,a,b,c,d;
        printf("enter the value : \n");
        scanf("%X",&n);
        a=n & 0xF000;
        b= n & 0x0F00;
        c=n & 0x00F0;
        d=n & 0x000F;
	n=(a>>4)|(b<<4)|(c>>4)|(d<<4); 
        printf("%X \n",n);
} */




#include<stdio.h>
int main()
{
        int n,a,b,c,d;
        printf("enter the value : \n");
        scanf("%X",&n);
        a=n & 0xF000;
        b= n & 0x0F00;
        c=n & 0x00F0;
        d=n & 0x000F;
        n=(a>>8)|(b>>8)|(c<<8)|(d<<8); 
        printf("%X \n",n);
}
