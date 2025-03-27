#include <stdio.h>
void decimalToBinary(int n) {
    if (n == 0) {
        printf("0");
        return;
    }
    
    // Print binary representation directly
    if (n > 0) {
        decimalToBinary(n / 2);  // Recursively call the function
        printf("%d", n % 2);     // Print the remainder (0 or 1)
    }
}

int main() {
    int number;
    
    // Taking input
    printf("Enter a decimal number: ");
    scanf("%d", &number);

    printf("Binary representation: ");
    if (number == 0) {
        printf("0");
    } else {
        decimalToBinary(number);  // Convert and print binary
    }

    return 0;
}
