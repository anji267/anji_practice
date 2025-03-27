#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum,x, result = 0, digits = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    originalNum = num;
    while (num != 0)
    {
        num = num / 10; // remove last digit  
        digits++;  
    }

    num = originalNum;  
    while (num != 0)
    {
        x  = num % 10;  //last digit
        result = result +  pow(x, digits);  
        num /= 10; // remove last digit 
    }
    if (result == originalNum)
    {
        printf("%d is an Armstrong number.\n", originalNum);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}


