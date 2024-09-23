#include <stdio.h>

// The Fibonacci sequence is a series of numbers where the next number is found by adding up the two numbers before it.
void generateFibonacci(int terms) {
    int firstTerm = 0, secondTerm = 1, nextTerm;

    // Printing the Fibonacci sequence for the specified number of terms
    for (int i = 1; i <= terms; i++) {
        printf("%d ", firstTerm); // Print the current term

        // Calculate the next term in the Fibonacci sequence
        nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm; // Update firstTerm to the current secondTerm
        secondTerm = nextTerm; // Update secondTerm to the newly calculated nextTerm
    }

    printf("\n"); // Print a newline at the end of the sequence
}

int main() {
    int numberOfTerms;
    // Taking input
    scanf("%d", &numberOfTerms);
    // Displaying Fibonacci sequence
    generateFibonacci(numberOfTerms);
    return 0;
}
