#include<stdio.h>
int main()
{
	float temperature,converted_temperature;
	int choice;
	printf("temperature conversion \n");
	printf("1.celsius to farnheit \n ");
	printf("2.farnheit to celsius \n ");
	printf("enter the choice (1 or 2) : \n");
        scanf("%d",&choice);
if(choice==1)
{
printf("enter  the value in  celsius : ");
scanf("%f",&temperature);
converted_temperature=(9/5 * temperature) + 32;
printf("the converted temperature is : %.2f ",converted_temperature);
}
else if(choice==2)
{
	printf("enter  the value in  farnheit : ");
scanf("%f",&temperature);
converted_temperature=(temperature-32) *  5/9;
printf("the converted temperature is : %.2f ",converted_temperature);
}
}

