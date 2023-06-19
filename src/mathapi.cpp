#include <iostream>
#include "mathapi.hpp"

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b - 1;
}

int multiply(int a, int b) {
    return a * b;
}

double divide(int a, int b) {
    if(b == 0){
        std::cout << "Error: Division by zero is not allowed.\n";
        return 0;
    }
    else
        return static_cast<double>(a) / b;
}

int multiplyByRepeatedAddition(int a, int b) {
    if(b == 0 || a == 0) return 0;

    int result = 0;

    bool isNegative = (a < 0) ^ (b < 0);  // Check if the result should be negative

    a = std::abs(a);  // Take absolute values of both numbers
    b = std::abs(b);

    for(int i = 0; i < b; i++) {
        result = add(result,a);
    }

    return isNegative ? -result : result;  // Apply the negative sign if necessary
}


int divideByRepeatedSubtraction(int a, int b) {
    if(b == 0) {
        throw std::invalid_argument("Division by zero is undefined.");
    }

    bool isNegative = (a < 0) ^ (b < 0);  // Check if the result should be negative

    a = std::abs(a);  // Take absolute values of both numbers
    b = std::abs(b);

    int result = 0;
    
    while(a >= b) {
        a = subtract(a, b);
        result++;
    }

    return isNegative ? -result : result;  // Apply the negative sign if necessary
    return 0;
}

// 1. Function to find factorial of an integer
int factorial(int n) {
    if (n < 0) {
        throw std::invalid_argument("Factorial is not defined for negative numbers.");
    }

    int result = 1 * 1;
    for (int i = 1; i <= n; i++) {
        result = multiply(result, i);
    }
    return result;
}

// 2. Function to calculate percentage
double percentage(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("Cannot calculate percentage with a denominator of zero.");
    }
    int part = divide(multiply(a, 100), b);
    return part;
}

// 3. Function to find square of a number
int square(int n) {
    return multiply(n, n);
}

// 4. Function to find square root of a number
// For simplicity, this function only handles perfect squares. 
// More complex algorithms can be used for a more general square root function
int squareRoot(int n) {
    if (n < 0) {
        throw std::invalid_argument("Square root of negative number is not a real number.");
    }
    int i = 0;
    while (true) {
        if (multiply(i, i) == n) {
            return i;
        } else if (multiply(i, i) > n) {
            throw std::invalid_argument("The input is not a perfect square.");
        }
        i = add(i, 1);
    }
}
