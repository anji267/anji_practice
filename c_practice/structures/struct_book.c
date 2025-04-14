#include<stdio.h>
struct store
{
	char name[50];
	int price;
	char author[50];
};
int main()
{
	int n;
	printf("Enter the number of books : \n");
	scanf("%d",&n);
	struct store b[n];
	printf("Enter the details of book : \n");
	for(int i=0;i<n;i++)
	{
		printf("Enter the name of book %d : \n",i+1);
		scanf("%s",b[i].name);
		printf("Enter the price of book %d: \n",i+1);
		scanf("%d",&b[i].price);
		printf("Enter the author name %d: \n",i+1);
		scanf("%s",b[i].author);
	}
	printf("\n");
	for(int i=0;i<n;i++)
	{
	printf("The name of book is : %s\nThe price of book is : %d\n,The author book is : %s\n",b[i].name,b[i].price,b[i].author);
	}
}
