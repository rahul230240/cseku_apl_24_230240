#include <stdio.h>

// It uses the Euclidean algorithm which repeatedly replaces the larger number by the remainder when the larger number is divided by the smaller number.
int calculateGcd(int num1, int num2) {
    // Continue until the second number becomes 0
    while (num2 != 0) {
        int temp = num2; // Store the value of num2 temporarily
        num2 = num1 % num2; // Update num2 with the remainder of num1 / num2
        num1 = temp; // Update num1 with the previous value of num2
    }
    // When num2 becomes 0, num1 contains the GCD
    return num1;
}

int main() {
    int firstNumber, secondNumber;
    // Taking input
    scanf("%d %d", &firstNumber, &secondNumber);
    // Displaying result
    printf("GCD: %d", calculateGcd(firstNumber, secondNumber));
    return 0;
}
