#include <stdio.h>

int main() {
    int n, a= 0, b= 1, c;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("fib  Series: ");
    for (int i = 0; i < n; i++) {
        if (i == 0)
            printf("%d ", a);
        else if (i == 1)
            printf("%d ", b);
        else {
            c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
        }
    }

    return 0;
}




		
