#include <stdio.h>
int countSetBits(int num)
{
    int count = 0;
    while (num)
    {
        count += num & 1;
        num >>= 1;
    }

    return count;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The number of set bits in %d is: %d\n", num, countSetBits(num));
    return 0;
}
