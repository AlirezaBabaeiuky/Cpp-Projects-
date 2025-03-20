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
