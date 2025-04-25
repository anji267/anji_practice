#include<stdio.h>
#include<string.h>
struct names
{
	char name[100];
};
int main()
{
	int n,i;
	printf("Enter the number of names : \n"); 
	scanf("%d",&n);
	struct names names[n];
	printf("enter the names :\n");
	for(i=0;i<n;i++)
	{
	 scanf("%s",names[i].name);   
	 //fgets(names[i].name, sizeof(names[i].name), stdin); if we want names with spaces 
	}
	for(int i=0;i<n;i++)
	{
	printf("The name of %d is : %s \n",i+1,names[i].name);
	}
}



