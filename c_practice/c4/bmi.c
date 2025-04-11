#include<stdio.h>
int main()
{
	float height,weight,bmi;
	printf("enter the value: \n");
	scanf("%f%f",&height,&weight);
	bmi = height / (weight * weight);
	printf("the bmi is : %.3f \n",bmi);
}

