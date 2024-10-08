#include <stdio.h>

// Recursive Function: Calculate Factorial
int factorial(int n) {
    if (n == 0) // Base case: 0! = 1
        return 1; 
    else // Recursive case: n! = n * (n-1)!
        return n * factorial(n - 1);
}

// Recursive Function: Calculate Fibonacci
int fibonacci(int n) {
    if (n == 0) // Base case: F(0) = 0
        return 0; 
    else if (n == 1) // Base case: F(1) = 1
        return 1; 
    else // Recursive case: F(n) = F(n-1) + F(n-2)
        return fibonacci(n - 1) + fibonacci(n - 2);
}

// Main Function
int main() {
    int num = 5;

    // Factorial Example
    printf("Factorial of %d is %d\n", num, factorial(num)); // Output: 120

    // Fibonacci Example
    printf("Fibonacci of %d is %d\n", num, fibonacci(num)); // Output: 5

    return 0;
}
