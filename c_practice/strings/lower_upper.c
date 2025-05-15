#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
        int n,i=0,j=0,choice;
        printf("enter the size : \n");
        scanf("%d",&n);
        getchar();
        char str[n];
        printf("enter the string(name): \n");
        fgets(str,sizeof(str),stdin);
        str[strcspn(str,"\n")]='\0';
        printf("enter choice 1 for string into lowercase choice 2 for string into uppercase : \n");
        scanf("%d",&choice);
        getchar();
        if(choice==1)
        {
                while(str[i]!='\0')
                {
                        if(str[i]>='A' && str[i]<='Z')
                        {
                                str[i]=str[i]+32;
                        }
                        i++;
                }
                printf("the string is : %s\n",str);
        }
        if(choice==2)
        {
                while(str[j]!='\0')
                {
                        if(str[j]>='a' && str[j]<='z')
                        {
                                str[j]=str[j]-32;
                        }
                        j++;
                }
                printf("the string is : %s\n",str);
        }
        return 0;
}
