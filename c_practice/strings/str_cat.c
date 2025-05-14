#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
        int n;
        printf("enter the size : \n");
        scanf("%d",&n);
        getchar();
        char str1[n];
        char str2[n];
        printf("enter the first string(name) : \n");
        fgets(str1,sizeof(str1),stdin);
        str1[strcspn(str1,"\n")]='\0';
        printf("enter the second string(name) : \n");
        fgets(str2,sizeof(str2),stdin);
        str2[strcspn(str2,"\n")]='\0';
        strcat(str1," ");
        strcat(str1,str2);
        printf("the final string is : %s\n",str1);
}
