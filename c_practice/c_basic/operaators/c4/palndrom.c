#include<stdio.h>
int main() 
{
    int num,num1,count=0,result;
    printf("Enter a number: ");
    scanf("%d", &num);
    num1=num;
    while(num !=0)
    {
	    result = num % 10; //give last result
	    count  = count * 10 + result; 
	    num = num / 10; //remove last digit
    }
    if(num1==count)
    {
	    printf("the number is palindrome : %d \n",num1);
    }
    else
    {
	    printf("the number is not palinrome : %d \n",num1);
    }
}



