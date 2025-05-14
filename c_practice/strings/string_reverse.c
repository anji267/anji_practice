#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
        int n;
        char temp;
        printf("enter the size of  string : \n");
        scanf("%d",&n);
        getchar();
        char str1[n];
        printf("enter the first string(name): \n");
        fgets(str1,sizeof(str1),stdin);
        str1[strcspn(str1, "\n")] = '\0';
        int len=strlen(str1);
        for(int i=0;i<len/2;i++)
        {
            temp=str1[i];
            str1[i]=str1[len-1-i];
            str1[len-1-i]=temp;
        }
        printf("the reversed string is : %s\n",str1);
}
