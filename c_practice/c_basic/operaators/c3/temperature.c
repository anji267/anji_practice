#include<stdio.h>
int main()
{
	float temperature,converted_temperature;
	printf("enter the values : \n");
	scanf("%f",&temperature);
	converted_temperature = (temperature  * 9/5 ) + 32;
	printf("the temperature in farnheit is : %f ",converted_temperature);
}

