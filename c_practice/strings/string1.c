#include<stdio.h>
int main()
{
        char name[100];
        printf("enter the name : \n");
        fgets(name, sizeof(name), stdin);
        printf("%s \n",name);
}
