#include <stdio.h>

// Factorial of a number n is the product of all positive integers less than or equal to n (n!)
int calculateFactorial(int number) {
    int result = 1; // Initialize result to 1 since multiplying by 1 doesn't affect the product
    
    // Multiply result by all integers from 1 to number
    for (int i = 1; i <= number; i++) {
        result *= i;
    }

    return result; // Return the computed factorial
}

int main() {
    int number;
    // Taking input
    scanf("%d", &number);
    // Displaying result
    printf("Factorial: %d", calculateFactorial(number));
    return 0;
}
