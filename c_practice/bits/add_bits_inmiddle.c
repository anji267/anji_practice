#include<stdio.h>

int main() 
{
    int m, position, n, m1, m2, count = 0, count1 = 0;
    printf("Enter the first number: \n");
    scanf("%d", &m);

    printf("Enter the bit position in first number after which we want to add second number: \n");
    scanf("%d", &position);

    printf("Enter the second number: \n");
    scanf("%d", &n);

    m1 = m >> position;
    m2 = m << (32 - position); //divide the bits 1011 = 10 | 11
    int temp = n;
    while (temp > 0)
    {
        count++;
        temp = temp >> 1;
    }
    temp = m2;
    while (temp > 0)
    {
        count1++;
        temp = temp >> 1;
    }
    m1 = m1 << count;  
    m1 = m1 | n;       
    m1 = m1 << count1; 
    m1 = m1 | (m2 >> (32 - position)); // Merge m2

    printf("The value is: %d\n", m1);

    return 0;
}



