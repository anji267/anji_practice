#include<stdio.h>
struct store
{
        char name[50];
        int price;
        char author[50];
};
int main()
{
        int n,i,highest;
        printf("Enter the number of books : \n");
        scanf("%d",&n);
        struct store b[n];
        printf("Enter the details of book : \n");
        for(i=0;i<n;i++)
        {
                printf("Enter the name of book %d : \n",i+1);
                scanf("%s",b[i].name);
                printf("Enter the price of book %d: \n",i+1);
                scanf("%d",&b[i].price);
                printf("Enter the author name %d: \n",i+1);
                scanf("%s",b[i].author);
        }
        printf("\n");
        for( i=0;i<n;i++)
        {
        printf("The name of book is : %s\nThe price of book is : %d\nThe author book is : %s\n",b[i].name,b[i].price,b[i].author);
        }
	printf("\n");
	printf("the highest price of book is : \n");
	highest = b[0].price;
	for(i=1;i<n;i++)
	{
		if(b[i].price>highest)
	{
		highest=b[i].price;
	}
	}
	printf("%d\n",highest);
	for(i=0;i<n;i++)
	{
		if(highest==b[i].price)
		{
			printf("the details of book are: %s\n%d\n%s\n",b[i].name,b[i].price,b[i].author);
		}
	}

}



