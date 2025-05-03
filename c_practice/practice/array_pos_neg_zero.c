#include <stdio.h>

int main() 
{
    int n, pos = 0, neg = 0, zero = 0;
    printf("Enter the size of array:\n");
    scanf("%d", &n);

    int a[n];
    printf("Enter the elements of array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("\nPositive elements: ");
    for(int i = 0; i < n; i++) {
        if(a[i] > 0) {
            printf("%d ", a[i]);
            pos++;
        }
    }

    printf("\nNegative elements: ");
    for(int i = 0; i < n; i++) {
        if(a[i] < 0) {
            printf("%d ", a[i]);
            neg++;
        }
    }

    printf("\nZero elements: ");
    for(int i = 0; i < n; i++) {
        if(a[i] == 0) {
            printf("%d ", a[i]);
            zero++;
        }
    }
    printf("\n\nCount of Positive elements: %d", pos);
    printf("\nCount of Negative elements: %d", neg);
    printf("\nCount of Zero elements: %d\n", zero);

    return 0;
}

