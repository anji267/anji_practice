#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
        int n;
        printf("enter the size of string : \n");
        scanf("%d",&n);
        getchar();
        char str1[n];
        char str2[n];
        printf("enter the string(name) : \n");
        fgets(str1,sizeof(str1),stdin);
        strcpy(str2,str1);//str2 = copy into str2 and it is destination , str1 = source
        printf("the original string is : %s\n",str1);
        printf("the copied string is : %s\n",str2);
}
