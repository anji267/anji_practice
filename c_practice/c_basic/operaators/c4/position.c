#include<stdio.h>
int main()
{
	int number,bit_position,Rresult,Lresult;
	printf("enter the values : \n");
	scanf("%d%d",&number,&bit_position);
	Rresult=number >> bit_position;
	Lresult=number << bit_position;
	printf("the right shift is : %d \n",Rresult);
	printf("the left shift is : %d \n",Lresult);
}



