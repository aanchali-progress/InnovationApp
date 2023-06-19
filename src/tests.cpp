#include <iostream>
#include <stdexcept>
#include <limits>
#include <cmath>
#include "mathapi.hpp"

void testAdd() {
    std::cout << "Running testAdd:\n";

    int result = add(5, 5);
    std::cout << "Test case add(5, 5), Expected: 10, Actual: " << result << "\n";
    if (result != 10) std::cout << "Test Failed\n";
    else std::cout << "Test Passed\n";

    result = add(-5, 5);
    std::cout << "Test case add(-5, 5), Expected: 0, Actual: " << result << "\n";
    if (result != 0) std::cout << "Test Failed\n";
    else std::cout << "Test Passed\n";

    result = add(std::numeric_limits<int>::max(), 1);
    std::cout << "Test case add(INT_MAX, 1), Expected: Overflow error\n";
    try {
        if (result) std::cout << "Test Failed\n";
    }
    catch (std::overflow_error const & err) {
        std::cout << "Test Passed\n";
    }

    std::cout << "\n";
}

void testSubtract() {
    std::cout << "Running testSubtract:\n";

    int result = subtract(5, 5);
    std::cout << "Test case subtract(5, 5), Expected: 0, Actual: " << result << "\n";
    if (result != 0) std::cout << "Test Failed\n";
    else std::cout << "Test Passed\n";

    result = subtract(5, -5);
    std::cout << "Test case subtract(5, -5), Expected: 10, Actual: " << result << "\n";
    if (result != 10) std::cout << "Test Failed\n";
    else std::cout << "Test Passed\n";

    result = subtract(std::numeric_limits<int>::min(), 1);
    std::cout << "Test case subtract(INT_MIN, 1), Expected: Overflow error\n";
    try {
        if (result) std::cout << "Test Failed\n";
    }
    catch (std::overflow_error const & err) {
        std::cout << "Test Passed\n";
    }

    std::cout << "\n";
}

void testMultiply() {
    std::cout << "Running testMultiply:\n";

    int result = multiply(5, 5);
    std::cout << "Test case multiply(5, 5), Expected: 25, Actual: " << result << "\n";
    if (result != 25) std::cout << "Test Failed\n";
    else std::cout << "Test Passed\n";

    result = multiply(-5, 5);
    std::cout << "Test case multiply(-5, 5), Expected: -25, Actual: " << result << "\n";
    if (result != -25) std::cout << "Test Failed\n";
    else std::cout << "Test Passed\n";

    result = multiply(std::numeric_limits<int>::max(), 2);
    std::cout << "Test case multiply(INT_MAX, 2), Expected: Overflow error\n";
    try {
        if (result) std::cout << "Test Failed\n";
    }
    catch (std::overflow_error const & err) {
        std::cout << "Test Passed\n";
    }

    std::cout << "\n";
}

void testDivide() {
    std::cout << "Running testDivide:\n";

    int result = divide(10, 2);
    std::cout << "Test case divide(10, 2), Expected: 5, Actual: " << result << "\n";
    if (result != 5) std::cout << "Test Failed\n";
    else std::cout << "Test Passed\n";

    result = divide(-10, 2);
    std::cout << "Test case divide(-10, 2), Expected: -5, Actual: " << result << "\n";
    if (result != -5) std::cout << "Test Failed\n";
    else std::cout << "Test Passed\n";

    std::cout << "Test case divide(10, 0), Expected: Division by zero error\n";
    try {
        result = divide(10, 0);
        std::cout << "Test Failed\n";
    }
    catch (std::invalid_argument const & err) {
        std::cout << "Test Passed\n";
    }

    std::cout << "\n";
}

void testMultiplyByRepeatedAddition() {
    std::cout << "Running testMultiplyByRepeatedAddition:\n";

    int result = multiplyByRepeatedAddition(5, 5);
    std::cout << "Test case multiplyByRepeatedAddition(5, 5), Expected: 25, Actual: " << result << "\n";
    if (result != 25) std::cout << "Test Failed\n";
    else std::cout << "Test Passed\n";

    result = multiplyByRepeatedAddition(-5, 5);
    std::cout << "Test case multiplyByRepeatedAddition(-5, 5), Expected: -25, Actual: " << result << "\n";
    if (result != -25) std::cout << "Test Failed\n";
    else std::cout << "Test Passed\n";

    result = multiplyByRepeatedAddition(std::numeric_limits<int>::max(), 2);
    std::cout << "Test case multiplyByRepeatedAddition(INT_MAX, 2), Expected: Overflow error\n";
    try {
        if (result) std::cout << "Test Failed\n";
    }
    catch (std::overflow_error const & err) {
        std::cout << "Test Passed\n";
    }

    std::cout << "\n";
}

void testDivideByRepeatedSubtraction() {
    std::cout << "Running testDivideByRepeatedSubtraction:\n";

    int result = divideByRepeatedSubtraction(10, 2);
    std::cout << "Test case divideByRepeatedSubtraction(10, 2), Expected: 5, Actual: " << result << "\n";
    if (result != 5) std::cout << "Test Failed\n";
    else std::cout << "Test Passed\n";

    result = divideByRepeatedSubtraction(-10, 2);
    std::cout << "Test case divideByRepeatedSubtraction(-10, 2), Expected: -5, Actual: " << result << "\n";
    if (result != -5) std::cout << "Test Failed\n";
    else std::cout << "Test Passed\n";

    std::cout << "Test case divideByRepeatedSubtraction(10, 0), Expected: Division by zero error\n";
    try {
        result = divideByRepeatedSubtraction(10, 0);
        std::cout << "Test Failed\n";
    }
    catch (std::invalid_argument const & err) {
        std::cout << "Test Passed\n";
    }

    std::cout << "\n";
}

void testFactorial() {
    std::cout << "Running testFactorial:\n";

    int result = factorial(5);
    std::cout << "Test case factorial(5), Expected: 120, Actual: " << result << "\n";
    if (result != 120) std::cout << "Test Failed\n";
    else std::cout << "Test Passed\n";

    std::cout << "Test case factorial(-5), Expected: Invalid argument error\n";
    try {
        result = factorial(-5);
        std::cout << "Test Failed\n";
    }
    catch (std::invalid_argument const & err) {
        std::cout << "Test Passed\n";
    }

    std::cout << "\n";
}

void testPercentage() {
    std::cout << "Running testPercentage:\n";

    double result = percentage(5, 50);
    std::cout << "Test case percentage(5, 50), Expected: 10, Actual: " << result << "\n";
    if (std::fabs(result - 10) > std::numeric_limits<double>::epsilon()) std::cout << "Test Failed\n";
    else std::cout << "Test Passed\n";

    result = percentage(-5, 50);
    std::cout << "Test case percentage(-5, 50), Expected: -10, Actual: " << result << "\n";
    if (std::fabs(result - (-10)) > std::numeric_limits<double>::epsilon()) std::cout << "Test Failed\n";
    else std::cout << "Test Passed\n";

    std::cout << "\n";
}

void testSquare() {
    std::cout << "Running testSquare:\n";

    int result = square(5);
    std::cout << "Test case square(5), Expected: 25, Actual: " << result << "\n";
    if (result != 25) std::cout << "Test Failed\n";
    else std::cout << "Test Passed\n";

    result = square(-5);
    std::cout << "Test case square(-5), Expected: 25, Actual: " << result << "\n";
    if (result != 25) std::cout << "Test Failed\n";
    else std::cout << "Test Passed\n";

    std::cout << "\n";
}

void testSquareRoot() {
    std::cout << "Running testSquareRoot:\n";

    int result = squareRoot(25);
    std::cout << "Test case squareRoot(25), Expected: 5, Actual: " << result << "\n";
    if (result != 5) std::cout << "Test Failed\n";
    else std::cout << "Test Passed\n";

    std::cout << "Test case squareRoot(-25), Expected: Invalid argument error\n";
    try {
        result = squareRoot(-25);
        std::cout << "Test Failed\n";
    }
    catch (std::invalid_argument const & err) {
        std::cout << "Test Passed\n";
    }

    std::cout << "\n";
}

int main(int argc, char* argv[]) {

    if (argc < 2) {
        std::cout << "Usage: program_name function_name" << std::endl;
        return 1;
    }

    std::string functionName = argv[1];

    if (functionName == "testAdd")
    {
        testAdd();
    }
    else if (functionName == "testSubtract")
    {
        testSubtract();
    }
    else if (functionName == "testMultiply")
    {
        testMultiply();
    }
    else if (functionName == "testSquareRoot")
    {
        testSquareRoot();
    }
    else if (functionName == "testDivide")
    {
        testDivide();
    }
    else if (functionName == "testMultiplyByRepeatedAddition")
    {
        testMultiplyByRepeatedAddition();
    }
    else if (functionName == "testDivideByRepeatedSubtraction")
    {
        testDivideByRepeatedSubtraction();
    }
    else if (functionName == "testFactorial")
    {
        testFactorial();
    }
    else if (functionName == "testPercentage")
    {
        testPercentage();
    }
    else if (functionName == "testSquare")
    {
        testSquare();
    }
 
    return 0;
}
