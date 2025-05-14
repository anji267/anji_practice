#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
        int n;
        printf("enter the size of string : \n");
        scanf("%d",&n);
        getchar();
        char str[n];
        printf("enter the string: ");
        fgets(str, sizeof(str), stdin);
        fputs(str, stdout);
        printf("\n");
return 0;
}
