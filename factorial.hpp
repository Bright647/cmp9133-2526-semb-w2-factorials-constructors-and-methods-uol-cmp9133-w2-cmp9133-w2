#define CATCH_CONFIG_MAIN

// Function to calculate factorial using multiple threads
long calculateFactorial(int n) {
    if (n < 0) {
     throw std::invalid_argument("Factorial is not defined for negative numbers");
    }
    long result = 1;
    //TODO: Implement the function to calculate factorial of n
for (int i = 2; i <= n; ++i) {
        result *= i;
}
    return result;
}
