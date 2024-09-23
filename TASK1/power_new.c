#include <stdio.h>

// It computes base raised to the exponent (base^exponent)
int calculatePower(int base, int exponent) {
    int result = 1; // Initialize result to 1 since multiplying by 1 doesn't affect the product
    
    // Multiply the base exponent number of times
    while (exponent != 0) {
        result *= base; // Multiply the current result by the base
        exponent--; // Decrease exponent by 1
    }

    return result; // Return the computed power
}

int main() {
    int base, exponent;
    // Taking input
    scanf("%d %d", &base, &exponent);
    // Displaying result
    printf("Result: %d", calculatePower(base, exponent));
    return 0;
}
