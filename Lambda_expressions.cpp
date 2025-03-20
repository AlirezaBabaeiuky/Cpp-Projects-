// lambda_expressions.cpp
// This program demonstrates the usage of lambda expressions in C++

#include <iostream>  // Include the iostream library for input and output
#include <vector>    // Include the vector library for using vectors
#include <algorithm> // Include the algorithm library for using algorithms

using namespace std; // Use the standard namespace to avoid prefixing std::

// The main function is the entry point of the program
int main() {
    // Using a lambda expression to print numbers
    vector<int> numbers = {1, 2, 3, 4, 5};

    cout << "Numbers: ";
    for_each(numbers.begin(), numbers.end(), [](int num) {
        cout << num << " ";
    });
    cout << endl;

    // Using a lambda expression to count even numbers
    int evenCount = count_if(numbers.begin(), numbers.end(), [](int num) {
        return num % 2 == 0;
    });
    cout << "Count of even numbers: " << evenCount << endl;

    // Using a lambda expression to capture variables
    int factor = 2;
    cout << "Numbers multiplied by " << factor << ": ";
    for_each(numbers.begin(), numbers.end(), [factor](int num) {
        cout << num * factor << " ";
    });
    cout << endl;

    return 0; // Return 0 to indicate successful completion
}
/*
Explanation
This example demonstrates the usage of lambda expressions in C++. Lambda expressions are a way to define anonymous functions directly in the code.

Using a Lambda Expression to Print Numbers:

The for_each algorithm is used to apply a lambda expression to each element in the numbers vector.
The lambda expression [](int num) { cout << num << " "; } takes an integer num and prints it.
Using a Lambda Expression to Count Even Numbers:

The count_if algorithm is used to count the even numbers in the numbers vector.
The lambda expression [](int num) { return num % 2 == 0; } takes an integer num and returns true if it is even.
Using a Lambda Expression to Capture Variables:

The for_each algorithm is used to apply a lambda expression to each element in the numbers vector, multiplying each number by a factor.
The lambda expression [factor](int num) { cout << num * factor << " "; } captures the factor variable by value and multiplies each number by this factor before printing it.
*/
