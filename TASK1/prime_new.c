#include <stdio.h>

// A prime number is a number greater than 1 that has no divisors other than 1 and itself
int isPrime(int number) {
    // Prime numbers are greater than 1
    if (number <= 1) {
        return 0; // Not prime
    }

    // Check divisibility from 2 to number-1
    for (int i = 2; i < number; i++) {
        // If the number is divisible by any number other than 1 and itself, it's not prime
        if (number % i == 0) {
            return 0; // Not prime
        }
    }

    return 1; // Prime
}

int main() {
    int number;
    // Taking input
    scanf("%d", &number);

    // Checking and printing result
    if (isPrime(number)) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }

    return 0;
}
