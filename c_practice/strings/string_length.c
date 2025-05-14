#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
        int n,i=0,count=0;
        printf("enter the size of string: \n");
        scanf("%d",&n);
        getchar();
        char str[n];
        printf("enter the string(name) : \n");
        fgets(str,sizeof(str),stdin);
        str[strcspn(str,"\n")]='\0';//this line is included to remove \n counting
        while(str[i]!='\0')
        {
                count++;
                i++;
        }
        printf("the entered string is : %s\n",str);
        printf("the length of string is : %d\n",count);
}
